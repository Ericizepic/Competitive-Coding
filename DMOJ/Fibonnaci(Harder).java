import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    static Scanner sc = new Scanner(System.in);


    static void matrixMultiplication(long[][] a, long[][] b) {
        long[][] res = new long[2][2];
        res[0][0] = (a[0][0] * b[0][0] + a[0][1] * b[1][0]) % 1000000007;
        res[0][1] = (a[0][0] * b[0][1] + a[0][1] * b[1][1]) % 1000000007;
        res[1][0] = (a[1][0] * b[0][0] + a[1][1] * b[1][0]) % 1000000007;
        res[1][1] = (a[1][0] * b[0][1] + a[1][1] * b[1][1]) % 1000000007;

        for (int i = 0; i < 2; i++) {
            System.arraycopy(res[i], 0, a[i], 0, 2);
        }
    }


    static long power(long[][] base, long exponent) {
        long[][] M = {{1, 1}, {1, 0}};

        if (exponent == 1) {
            return base[0][0] + base[0][1];
        }

        power(base, exponent / 2);
        matrixMultiplication(base, base);
        if (exponent % 2 != 0) {
            matrixMultiplication(base, M);
        }

        return base[0][0] + base[0][1];
    }
    


    public static void main(String[] args) {
        String s = sc.nextLine();
        BigInteger b = new BigInteger(s);
        BigInteger c = new BigInteger(Long.toString(2000000016));
        long[][] base = {{1, 1}, {1, 0}};
        long n = b.mod(c).longValue();
        
        if (n == 0) {
            System.out.print(0);
        } else if (n == 1) {
            System.out.print(1);
        } else if (n == 2) {
            System.out.print(1);
        } else {
            System.out.print(power(base, n - 2)%1000000007);
        }
    }
}