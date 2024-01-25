package LAB_12;

import java.util.Scanner;

/*
Illustrate the significance of string buffer as compared to string with a code snippet.
 */
public class qus2 {
    public static void main(String[] args) {
StringBuffer sb =new StringBuffer();
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter string1 : ");
        sb=sb.append(sc.nextLine());
        StringBuffer sb2 =new StringBuffer();
        System.out.println("Enteer string2 : ");
        sb2=sb2.append(sc.nextLine());


    }

}
