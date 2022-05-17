import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;


public class Main {

    static BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
    static int n, n1;
    static int[] ar;
    static int[][] segTree;

    static int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    static int newSize(int ogLength){
        int res = 1;
        while (res<ogLength)
            res = res*2;
        return res;
    }


    static void update(int x, int v) {
        int temp = x + n;
        segTree[x + n][0] = v;
        segTree[x + n][1] = v;
        while (temp > 0) {
            temp = temp >> 1;
            segTree[temp][0] = Math.min(segTree[temp * 2][0], segTree[temp * 2 + 1][0]);
            segTree[temp][1] = gcd(segTree[temp * 2][1], segTree[temp * 2 + 1][1]);

            if (segTree[temp << 1][1] == segTree[(temp << 1) + 1][1])
                segTree[temp][2] = segTree[temp << 1][2] + segTree[(temp << 1) + 1][2];

            else if (gcd(segTree[temp][1], segTree[(temp << 1) + 1][1]) == segTree[(temp << 1) + 1][1])
                segTree[temp][2] = segTree[(temp << 1) + 1][2];

            else if (gcd(segTree[temp][1], segTree[(temp << 1) + 1][1]) == segTree[(temp << 1)][1])
                segTree[temp][2] = segTree[temp << 1][2];

            else
                segTree[temp][2] = 0;
        }
    }

    private static int minimum(int low, int high, int l, int r, int pos) {
        if (l <= low && r >= high) {
            return segTree[pos][0];
        }
        if (l > high || r < low) {
            return Integer.MAX_VALUE;
        }
        int mid = (low + high) / 2;
        return Math.min(minimum(low, mid, l, r, 2 * pos), minimum(mid + 1, high, l, r, 2 * pos + 1));
    }

    private static int gcdQuery(int low, int high, int l, int r, int pos) {
        if (l <= low && r >= high) {
            return segTree[pos][1];
        }
        if (l > high || r < low) {
            return 0;
        }
        int mid = (low + high) / 2;
        return gcd(gcdQuery(low, mid, l, r, 2 * pos), gcdQuery(mid + 1, high, l, r, 2 * pos + 1));
    }

    private static int freq(int low, int high, int l, int r, int pos, int temp) {
        if (l <= low && r >= high ) {
            if (segTree[pos][1] == temp)
                return segTree[pos][2];
            if (segTree[pos][1] < temp)
                return 0;
        }
        if (l > high || r < low || segTree[pos][1]>temp) {
            return 0;
        }
        int mid = (low + high) / 2;
        return freq(low, mid, l, r, 2 * pos, temp) + freq(mid + 1, high, l, r, 2 * pos + 1, temp);
    }

    public static void main(String[] args) throws IOException {
        StringTokenizer st = new StringTokenizer(b.readLine());
        n1 = Integer.parseInt(st.nextToken());//n is length of the array
        int m = Integer.parseInt(st.nextToken()); //m is number of queries

        //initializing original array
        ar = new int[n1];
        st = new StringTokenizer(b.readLine());

        for (int i = 0; i < n1; i++)
            ar[i] = Integer.parseInt(st.nextToken());


        //initialize seg tree so it can handle minimums, gcd, number of times each number appears


        n = newSize(n1);

        segTree = new int[2 * n][3];
        for (int i = 0; i < n1; i++) {
            segTree[i + n][0] = ar[i];//minimum is its own number
            segTree[i + n][1] = ar[i];//gcd is its own number
            segTree[i + n][2] = 1;//gcd occurs once

        }//10100
        for (int i = n - 1; i > 0; i--) {
            segTree[i][0] = Math.min(segTree[i << 1][0], segTree[(i << 1) + 1][0]);
            segTree[i][1] = gcd(segTree[i << 1][1], segTree[(i << 1) + 1][1]);

            if (segTree[i << 1][1] == segTree[(i << 1) + 1][1])
                segTree[i][2] = segTree[i << 1][2] + segTree[(i << 1) + 1][2];
            else if (gcd(segTree[i][1], segTree[(i << 1) + 1][1]) == segTree[(i << 1) + 1][1])
                segTree[i][2] = segTree[(i << 1) + 1][2];
            else if (gcd(segTree[i][1], segTree[(i << 1) + 1][1]) == segTree[(i << 1)][1])
                segTree[i][2] = segTree[i << 1][2];
            else
                segTree[i][2] = 0;
        }

        //now we have to do updates and queries
        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(b.readLine());
            String s = st.nextToken();

            switch (s) {
                case "C":
                    int x = Integer.parseInt(st.nextToken())-1;
                    int v = Integer.parseInt(st.nextToken());
                    update(x, v);
                    break;
                case "M": {
                    int l = Integer.parseInt(st.nextToken()) - 1;
                    int r = Integer.parseInt(st.nextToken()) - 1;
                    System.out.println(minimum(0, n - 1, l, r, 1));
                    break;
                }
                case "G": {
                    int l = Integer.parseInt(st.nextToken()) - 1;
                    int r = Integer.parseInt(st.nextToken()) - 1;
                    System.out.println(gcdQuery(0, n - 1, l, r, 1));
                    break;
                }
                default: {
                    int l = Integer.parseInt(st.nextToken()) - 1;
                    int r = Integer.parseInt(st.nextToken()) - 1;
                    int temp = gcdQuery(0, n - 1, l, r, 1);
                    System.out.println(freq(0, n - 1, l, r, 1, temp));
                    break;
                }
            }
        }
    }
}