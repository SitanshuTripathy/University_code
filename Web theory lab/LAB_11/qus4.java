package LAB_11;

import java.util.Scanner;

/*
write a program to print all the P&C of the inputted string.
 */
public class qus4 {
static int factorial(int m){
    int fact=1;
   for (int i=1;i<=m;i++) {
       fact=fact*i;

   }
    System.out.println("The number of combo = "+fact);
     return 0;
    }

    public static void main(String[] args) {
        String s;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the string = ");
        s=sc.nextLine();
        factorial(s.length());
    }
}
