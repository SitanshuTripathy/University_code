package LAB_4;

import java.util.Scanner;

public class qus4 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter size = ");
        int n = sc.nextInt();
        int alpha = 65;
        int count=0;
        int space = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < space; j++)
                System.out.print(" ");
            for (int j = 0; j <= i; j++,count++)
                System.out.print((char)(alpha+count)+" ");
            System.out.println();
            space--;
        }
        space = 0;
        for (int i = n; i > 0; i--)
        {for (int j = 0; j < space; j++)
            System.out.print(" ");
            for (int j = 0; j < i-1; j++,count++)
                System.out.print(" "+(char) (alpha+count));
            System.out.println();
            space++;
        }
    }
    }

