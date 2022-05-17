aimport java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;


public class Main {

    static BufferedReader b = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] args) throws IOException {
        StringTokenizer st = new StringTokenizer(b.readLine());
        int n = Integer.parseInt(st.nextToken());
        int w = Integer.parseInt(st.nextToken());
        int[] crackers = new int[n + 1];
        int[] crack = new int[n];


        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(b.readLine());
            crackers[i] = Integer.parseInt(st.nextToken());
            crack[i] = crackers[i];
        }
        crackers[n] = w;

int min = 0, start = 0, end;
        long max;
        
        Arrays.sort(crackers);
        Arrays.sort(crack);

        for (int i = 1; i <= n; i++)
            min += crackers[i] - crackers[i - 1];



        long a = 0;
        long b = 0;

        //if pointer is closer to back
        a += w - crack[start];
        start++;
        end = n - 1;
        for (int i = 1; i < n; i++) {
            if (i % 2 == 1) {
                a += Math.max(Math.abs(crack[end] - w), Math.abs(crack[end] - crack[start - 1]));
                end--;
            } else {
                a += Math.max(Math.abs(w - crack[start]), Math.abs(crack[end + 1] - crack[start]));
                start++;
            }
        }


        //if pointer is closer to beginning
        end = n-1;
        start = 0;
        b += crack[end] - w;
        end = end - 1;
        for (int i = 1; i < n; i++) {
            if (i % 2 == 0) {
                b += Math.max(Math.abs(crack[end] - w), Math.abs(crack[end] - crack[start - 1]));
                end--;
            } else {
                b += Math.max(Math.abs(w - crack[start]), Math.abs(crack[end + 1] - crack[start]));
                start++;
            }
        }
        max = Math.max(a, b);

        System.out.print(min + " " + max);
    }
}