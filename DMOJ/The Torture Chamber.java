import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Vector;

public class Main {
    static BufferedReader b = new BufferedReader(new InputStreamReader(System.in));//1 2531 => 369    1 25 39 => 369
    static long primeCount = 0;

    public static void main(String[] args) throws IOException {
        StringTokenizer st = new StringTokenizer(b.readLine());
        long m = Long.parseLong(st.nextToken());
        st = new StringTokenizer(b.readLine());
        long n = Long.parseLong(st.nextToken());
        Vector<Integer> primes = new Vector<>();
        long limit = (long) Math.floor(Math.sqrt(n)) + 1;
        long low = m;
        long high = m + limit;


        boolean[] bol = new boolean[(int)limit+1000000];
        bol[0] = true;
        bol[1] = true;

        for (int i = 2; i < limit; i++) {
            if (!bol[i]) {
                primes.add(i);
                if (i < Math.sqrt(limit)) {
                    for (int j = i * i; j < limit; j += i) {
                        bol[j] = true;
                    }
                }
            }
        }
        while (low < n) {
            bol = new boolean[(int) limit + 1000000];
            if (high > n) {
                high = n;
            }
            for (int i = 0; i < primes.size(); i++) {
                long adj = (long) (low / primes.get(i)) * primes.get(i);
                if (adj < low) {
                    adj += primes.get(i);
                }
                for (long j = adj; j < high; j += primes.get(i)) {
                    bol[(int)(j - low)] = true;
                }
            }
            for (long j = low; j<high; j++){
                if (!bol[(int)(j - low)]){
                    primeCount++;
                }
            }
            low  = low + limit;
            high = high + limit;
        }
        System.out.print(primeCount);
    }
}