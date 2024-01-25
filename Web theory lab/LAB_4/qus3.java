package LAB_4;

import java.util.Scanner;

public class qus3 {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int m;
        m=sc.nextInt();
        int size=m;

        for (int i=0; i<size; i++){
            for (int j=1; j<size-i; j++){
                System.out.print(" ");
            }
            for (int k=0; k<=i; k++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
