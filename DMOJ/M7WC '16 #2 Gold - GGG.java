import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


public class Main {
    static long a, b;

    static void matrixMultiplication(long[][] a, long[][] b) {
        long[][] res = new long[2][2];
        res[0][0] = (a[0][0] * b[0][0] + a[0][1] * b[1][0]) % 1000000000;
        res[0][1] = (a[0][0] * b[0][1] + a[0][1] * b[1][1]) % 1000000000;
        res[1][0] = (a[1][0] * b[0][0] + a[1][1] * b[1][0]) % 1000000000;
        res[1][1] = (a[1][0] * b[0][1] + a[1][1] * b[1][1]) % 1000000000;

        for (int i = 0; i < 2; i++) {
            System.arraycopy(res[i], 0, a[i], 0, 2);
        }
    }


    static long power(long[][] base, long exponent) {
        long[][] M = {{1, 1}, {1, 0}};
        if (exponent == 1) {
            return base[0][0]*b + base[0][1]*b + base[1][0]*a + base[1][1]*a;
        }

        power(base, exponent / 2);
        matrixMultiplication(base, base);
        if (exponent % 2 != 0) {
            matrixMultiplication(base, M);
        }

        return base[0][0]*b + base[0][1]*b + base[1][0]*a + base[1][1]*a;
    }


static BufferedReader buf = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args) throws IOException {
        StringTokenizer st = new StringTokenizer(buf.readLine());
        a = Long.parseLong(st.nextToken());
        b = Long.parseLong(st.nextToken());
        long n = Long.parseLong(st.nextToken());

        long[][] base = {{1, 1}, {1, 0}};

        if (n == 0) {
            System.out.print(a);
        } else if (n == 1) {
            System.out.print(b);
        } else if (n == 2) {
            System.out.print(a+b);
        } else {
            System.out.print(power(base, n -2)%1000000000);
        }
    }
}