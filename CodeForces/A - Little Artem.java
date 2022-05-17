import java.util.Scanner;

public class Main {
    static Scanner sc = new Scanner(System.in);
    static int r, c;
    static String[][]ar;
    static void construct(){
        ar = new String[r][c];
        if (r%2==1&&c%2==1){
            StringBuilder s1 = new StringBuilder();
            StringBuilder s2 = new StringBuilder();

            for (int i = 0; i<c; i++){
                if (i%2==0){
                    s1.append("B");
                    s2.append("W");
                }
                else{
                    s1.append("W");
                    s2.append("B");
                }
            }
            for (int i = 0; i<r; i++){
                if (i%2==0){
                    System.out.println(s1);
                }
                else{
                    System.out.println(s2);
                }
            }
        }
        else if (r%2==0&&c%2==0){
            ar[0][0] = "B";
            ar[0][1] = "B";
            ar[1][0] = "B";
            ar[1][1] = "W";
            for (int i = 0; i<r; i++){
                if (i==0){
                    for (int j = 2; j<c; j++){
                        ar[i][j] = "B";
                    }
                }
                else if (i==1){
                    for (int j = 2; j<c; j++){
                        ar[i][j] = "W";
                    }
                }
                else if (i%2==0){
                    for (int j = 0; j<c; j++){
                        ar[i][j] = "B";
                    }
                }
                else {
                    for (int j = 0; j<c; j++){
                        ar[i][j] = "W";
                    }
                }
            }
            for (int i = 0; i<r;i++){
                StringBuilder s = new StringBuilder();
                for (int j = 0; j<c;j++){
                    s.append(ar[i][j]);
                }
                System.out.println(s);
            }
        }
        else if (r%2==1&&c%2==0){
            ar[0][0] = "B";
            ar[0][1] = "B";
            ar[1][0] = "B";
            ar[1][1] = "W";
            for (int i = 0; i<c; i++){
                if (i==0){
                    for (int j = 2; j<r; j++){
                        ar[j][i] = "B";
                    }
                }
                else if (i==1){
                    for (int j = 2; j<r; j++){
                        ar[j][i] = "W";
                    }
                }
                else if (i%2==0){
                    for (int j = 0; j<r; j++){
                        ar[j][i] = "B";
                    }
                }
                else {
                    for (int j = 0; j<r; j++){
                        ar[j][i] = "W";
                    }
                }
            }
            for (int i = 0; i<r;i++){
                StringBuilder s = new StringBuilder();
                for (int j = 0; j<c;j++){
                    s.append(ar[i][j]);
                }
                System.out.println(s);
            }
        }
        else if (r%2==0&&c%2==1){
            ar[0][0] = "B";
            ar[0][1] = "B";
            ar[1][0] = "B";
            ar[1][1] = "W";
            for (int i = 0; i<r; i++){
                if (i==0){
                    for (int j = 2; j<c; j++){
                        ar[i][j] = "B";
                    }
                }
                else if (i==1){
                    for (int j = 2; j<c; j++){
                        ar[i][j] = "W";
                    }
                }
                else if (i%2==0){
                    for (int j = 0; j<c; j++){
                        ar[i][j] = "B";
                    }
                }
                else {
                    for (int j = 0; j<c; j++){
                        ar[i][j] = "W";
                    }
                }
            }
            for (int i = 0; i<r;i++){
                StringBuilder s = new StringBuilder();
                for (int j = 0; j<c;j++){
                    s.append(ar[i][j]);
                }
                System.out.println(s);
            }
        }

    }

    public static void main(String[] args) {
        int n = sc.nextInt();
        for (int i = 0; i<n; i++){
            r  =sc.nextInt();
            c = sc.nextInt();
            construct();
        }
    }
}