import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

    static long factorial[] = new long[200001];

    static long choose(int n, int k) {
        if (k > n) {
            return 0;
        }
        long res = factorial[n];
        long temp = factorial[n-k];
        res = (res * modular(temp, 1000000005)) % 1000000007;
        temp = factorial[k];
        res = (res * modular(temp, 1000000005)) % 1000000007;
        return res;
    }

    static long modular(long base, int exp) {
        long res = 1;
        while (exp > 0) {
            if (exp % 2 == 1)
                res = (res * base) % 1000000007;
            exp = exp / 2;
            base = (base * base) % 1000000007;
        }
        return res;
    }

    static void mergerSort(int[][] ar, int n) {
        if (n < 2) {
            return;
        }
        int mid = n / 2;
        int[][] l = new int[3][mid];
        int[][] r = new int[3][n - mid];

        for (int i = 0; i < mid; i++) {
            l[0][i] = ar[0][i];
            l[1][i] = ar[1][i];
            l[2][i] = ar[2][i];
        }
        for (int i = mid; i < n; i++) {
            r[0][i - mid] = ar[0][i];
            r[1][i - mid] = ar[1][i];
            r[2][i - mid] = ar[2][i];
        }
        mergerSort(l, mid);
        mergerSort(r, n - mid);

        merge(ar, l, r, mid, n - mid);
    }

    static void merge(int[][] a, int[][] l, int[][] r, int left, int right) {
        int i = 0, j = 0, k = 0;

        while (i < left && j < right) {
            if (l[2][i] <= r[2][j]) {
                a[0][k] = l[0][i];
                a[1][k] = l[1][i];
                a[2][k] = l[2][i];
                i++;
            } else {
                a[0][k] = r[0][j];
                a[1][k] = r[1][j];
                a[2][k] = r[2][j];
                j++;
            }
            k++;
        }
        while (i < left) {
            a[0][k] = l[0][i];
            a[1][k] = l[1][i];
            a[2][k] = l[2][i];
            i++;
            k++;
        }
        while (j < right) {
            a[0][k] = r[0][j];
            a[1][k] = r[1][j];
            a[2][k] = r[2][j];
            j++;
            k++;
        }
    }


    public static void main(String[] args) throws IOException {
        StringTokenizer st = new StringTokenizer(b.readLine());
        int H = Integer.parseInt(st.nextToken());//number of people
        int W = Integer.parseInt(st.nextToken());//number of people
        int N = Integer.parseInt(st.nextToken());//number of people

        factorial[0] = 1;
        factorial[1] = 1;
        for (int i = 2; i < factorial.length; i++) {
            factorial[i] = (factorial[i - 1] * i) % 1000000007;
        }

        long res = choose(H + W - 2, W - 1);
        int[][] wall = new int[3][N];

        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(b.readLine());
            wall[0][i] = Integer.parseInt(st.nextToken());
            wall[1][i] = Integer.parseInt(st.nextToken());
            wall[2][i] = wall[0][i] + wall[1][i];
        }
        mergerSort(wall, N);
        //we need to sort the positions based on what other walls they affect


        long[] value = new long[N];
        for (int i = 0; i < N; i++) {
            int r = wall[0][i];
            int c = wall[1][i];
            value[i] = choose(r + c - 2, c - 1);
        }

        for (int i = 0; i < N; i++) {
            int r = wall[0][i];
            int c = wall[1][i];
            res = (res - (value[i] * choose(H - r + W - c, W - c)) % 1000000007);

            //note that a wall being added affects the values of other walls but not those with same x+y values
            for (int j = i + 1; j < N; j++) {
                if (wall[0][j] >= wall[0][i] && wall[1][j] >= wall[1][i]) {
                    value[j] = (value[j] - (value[i]*choose(wall[0][j] - r + wall[1][j] - c, wall[1][j] - c))% 1000000007) % 1000000007;
                }
            }
        }
        while (res < 0)
            res += 1000000007;

        System.out.print(res % 1000000007);

    }
}