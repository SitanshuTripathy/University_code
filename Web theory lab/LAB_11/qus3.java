package LAB_11;

import java.util.Scanner;

/*
 use the string class to accept a string "welcome to kiit university". use methods :
  1. length of string 2. reverse the string 3. delete extra spaces 4.extract the substring kiit university

 */
public class   qus3 {
    public static void main(String[] args) {
        String s;
        Scanner sc =new Scanner(System.in);
        s=sc.nextLine();
        System.out.println(s);
        int m=s.length();
        System.out.println(m);
     String n= String.valueOf(new StringBuffer(s).reverse());
        System.out.println(n);

        s.trim();
        System.out.println(s);
        System.out.println("Substring ="+ s.substring(11));
    }
}
