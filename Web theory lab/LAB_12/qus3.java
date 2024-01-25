package LAB_12;

import java.util.Scanner;

/*
input 2 string and compare them using all possible method in string clas
 */
public class qus3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first string : ");
        String str1 = sc.nextLine();

        System.out.println("Enter the second string : ");
        String str2 = sc.nextLine();

        sc.close();

        System.out.println("Comparing both strings : ");

        if (str1.equals(str2)) {
            System.out.println("Both the strings ar the same.");
        }

        if (str1.equalsIgnoreCase(str2)) {
            System.out.println("Strings are the same if we ignore the case.");
        }

        int flag = str1.compareTo(str2);
        if (flag == 0) {
            System.out.println("Strings are the same because the difference is 0.");
        }

        else {
            if (flag == 32) {
                System.out.println("Difference is in case, while the alphabets are the same.");
            }

            else {
                System.out.println("The difference begtween the strings is : " + flag);
            }
        }
    }
}
