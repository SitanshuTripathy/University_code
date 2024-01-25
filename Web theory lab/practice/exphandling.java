package practice;

import java.util.Scanner;

public class exphandling {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            int n = sc.nextInt();
            int m = sc.nextInt();
            float div = n / m;
            System.out.println(div);
        }
        catch (Exception e){
            System.out.println("error");
            System.out.println(e.getMessage());

        }
    }
}