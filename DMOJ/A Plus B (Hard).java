import java.io.*;
import java.util.*;

import java.util.Scanner;

public class Main {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int cases = sc.nextInt();
        sc.nextLine();

        for (int k = 0; k < cases; k++) {
            String s = sc.nextLine();
            String num1 = s.substring(0, s.indexOf(" "));
            String num2 = s.substring(s.lastIndexOf(" "));

            boolean p1 = false, p2 = false;//if both are negative or positive
            if (num1.contains("-")) {
                p1 = true;
                num1 = num1.replace("-", "");
            }
            if (num2.contains("-")) {
                p2 = true;
                num2 = num2.replace("-", "");
            }
            num2 = num2.replaceAll(" ", "");


            StringBuilder sum = new StringBuilder();
            StringBuilder rev = new StringBuilder();
            StringBuilder num = new StringBuilder();
            if (num1.length() > num2.length()) {
                for (int i = 0; i < num1.length() - num2.length(); i++) {
                    num.append(0);
                }
                num.append(num2);
                num2 = num.toString();
            } else if (num1.length() < num2.length()) {
                for (int i = 0; i < num2.length() - num1.length(); i++) {
                    num.append(0);
                }
                num.append(num1);
                num1 = num.toString();
            }


            int carry = 0;
            int a, b;

            if (p1 == true && p2 == true) {
                for (int i = 0; i < Math.min(num1.length(), num2.length()); i++) {
                    a = Integer.parseInt(num1.substring(num1.length() - 1 - i, num1.length() - i));
                    b = Integer.parseInt(num2.substring(num2.length() - 1 - i, num2.length() - i));
                    int temp = a + b + carry;
                    if (temp >= 10) {
                        carry = 1;
                        rev.append(temp % 10);
                    } else {
                        carry = 0;
                        rev.append(temp);
                    }
                }
                sum.append("-");
                if (carry == 1) {
                    sum.append(1);
                }
                rev.reverse();
                sum.append(rev);
                System.out.println(sum);
            } else if (p1 == false && p2 == false) {
                for (int i = 0; i < Math.min(num1.length(), num2.length()); i++) {
                    a = Integer.parseInt(num1.substring(num1.length() - 1 - i, num1.length() - i));
                    b = Integer.parseInt(num2.substring(num2.length() - 1 - i, num2.length() - i));
                    int temp = a + b + carry;
                    if (temp >= 10) {
                        carry = 1;
                        rev.append(temp % 10);
                    } else {
                        carry = 0;
                        rev.append(temp);
                    }
                }
                if (carry == 1) {
                    sum.append(1);
                }
                rev.reverse();
                sum.append(rev);
                System.out.println(sum);
            } else if (p1 == false && p2 == true) {
                if (num1.length() > 8) {
                    if (Integer.parseInt(num2.substring(0, 8)) > Integer.parseInt(num1.substring(0, 8))) {
                        sum.append("-");
                        String temp = num1;
                        num1 = num2;
                        num2 = temp;
                    }
                } else if (Integer.parseInt(num2) > Integer.parseInt(num1)) {
                    sum.append("-");
                    String temp = num1;
                    num1 = num2;
                    num2 = temp;
                }
                for (int i = 0; i < Math.min(num1.length(), num2.length()); i++) {
                    a = Integer.parseInt(num1.substring(num1.length() - 1 - i, num1.length() - i));
                    b = Integer.parseInt(num2.substring(num2.length() - 1 - i, num2.length() - i));
                    int temp = a - b - carry;
                    if (temp < 0) {
                        rev.append(10 + temp);
                        carry = 1;
                    } else {
                        carry = 0;
                        rev.append(temp);
                    }
                }
                while (rev.charAt(rev.length() - 1) == '0'&&rev.length()>1) {
                    rev.deleteCharAt(rev.length() - 1);
                }
                rev.reverse();
                sum.append(rev);
                System.out.println(sum);
            } else if (p1 == true && p2 == false) {
                if (num1.length() > 8) {
                    if (Integer.parseInt(num1.substring(0, 8)) > Integer.parseInt(num2.substring(0, 8))) {
                        sum.append("-");
                        String temp = num1;
                        num1 = num2;
                        num2 = temp;
                    }
                } else if (Integer.parseInt(num1) > Integer.parseInt(num2)) {
                    sum.append("-");
                    String temp = num1;
                    num1 = num2;
                    num2 = temp;
                }
                for (int i = 0; i < Math.min(num1.length(), num2.length()); i++) {
                    a = Integer.parseInt(num1.substring(num1.length() - 1 - i, num1.length() - i));
                    b = Integer.parseInt(num2.substring(num2.length() - 1 - i, num2.length() - i));
                    int temp = b - a - carry;
                    if (temp < 0) {
                        rev.append(10 + temp);
                        carry = 1;
                    } else {
                        carry = 0;
                        rev.append(temp);
                    }
                }
                while (rev.charAt(rev.length() - 1) == '0'&&rev.length()>1) {
                    rev.deleteCharAt(rev.length() - 1);
                }
                rev.reverse();
                sum.append(rev);
                System.out.println(sum);
            }
        }
    }
}