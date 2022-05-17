import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;


public class Main {

    static BufferedReader b = new BufferedReader(new InputStreamReader(System.in));
    static int[] BIT, map2, arr;
    static HashMap<Integer, Integer> map = new HashMap<>();
    static ArrayList<Integer> list = new ArrayList<>();

    static void update(int x, int a) {
        for (int i = x; i < BIT.length; i += i & -i)
            BIT[i] += a;
    }

    static int search(int n){
        int sum = 0;
        int pos = 0;

        for (int i = (int)(Math.log(BIT.length) / Math.log(2)); i>=0; i--){
            if(pos + (1 << i) < BIT.length && sum + BIT[pos + (1 << i)] < n)
            {
                sum += BIT[pos + (1 << i)];
                pos += (1 << i);
            }
        }
        return pos+1;
    }


    public static void main(String[] args) throws IOException {
        StringTokenizer st = new StringTokenizer(b.readLine());
        int n = Integer.parseInt(st.nextToken()), count = 0;
        int[][] ar = new int[3][n];
        
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(b.readLine());
            String c = String.valueOf(st.nextToken());
            if (c.equals("N")) {
                ar[0][i] = 0;
                ar[1][i] = Integer.parseInt(st.nextToken());//x
                ar[2][i] = Integer.parseInt(st.nextToken());//r
                list.add(ar[2][i]);
                count++;

            } else if (c.equals("M")) {
                ar[0][i] = 1;
                ar[1][i] = Integer.parseInt(st.nextToken());//x
                ar[2][i] = Integer.parseInt(st.nextToken());//r
                list.add(ar[2][i]);
                count++;

            } else {
                int k = Integer.parseInt(st.nextToken());
                ar[0][i] = 2;
                ar[1][i] = k;
                ar[2][i] = 0;
            }
        }

        Collections.sort(list);
        BIT = new int[count + 1];//how many  ratings will we ever encounter
        arr = new int[count];//who is at currently at index i
        map = new HashMap<>();
        map2 = new int[1000001];

        for (int i = 0; i < count; i++) {//i is the number that is already in
            map.put(list.get(i), count - 1 - i);
        }// now we have map every r value to an index



        for (int i = 0; i < n; i++) {
            if (ar[0][i] == 0) {

                update(map.get(ar[2][i]) + 1, 1);

                arr[map.get(ar[2][i])] = ar[1][i];//arr maps score index to person
                map2[ar[1][i]] = ar[2][i];//map2 maps person to a specific score

            } else if (ar[0][i] == 1) {

                update(map.get(map2[ar[1][i]]) + 1, -1);
                update(map.get(ar[2][i]) + 1, 1);

                arr[map.get(map2[ar[1][i]])] = 0;
                arr[map.get(ar[2][i])] = ar[1][i];
                map2[ar[1][i]] = ar[2][i];

            } else {
                int a = search(ar[1][i]);
                System.out.println(arr[a-1]);
            }
        }
    }
}