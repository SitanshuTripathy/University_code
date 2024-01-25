package LAB_4;

import java.util.Scanner;

public class qus4ag {
    public static void main(String[] args) {
       Scanner diamond = new Scanner(System.in);

        System.out.print("enter rows ");
        int rows = diamond.nextInt();

        System.out.println("diamond alphabets\n");
        int i, j, k, l, letters = 65;

        for (i = 1 ; i <= rows; i++ )
        {
            for (j = 1 ; j <= rows-i; j++ )
            {
                System.out.print(" ");
            }
            for (k = 1 ; k >= 1; k-- )
            {
                System.out.print((char)(letters++)+" ");
            }
            for (l = 2 ; l <= i; l++)
            {
                System.out.print((char)(letters++)+" ");
            }
            System.out.println();
        }

        for (i = rows - 1 ; i > 0; i-- )
        {
            for (j = 1 ; j <= rows - i; j++ )
            {
                System.out.print(" ");
            }
            for (k = 1 ; k >= 1; k-- )
            {
                System.out.print((char)(letters++)+" ");
            }
            for (l = 2 ; l <= i; l++)
            {
                System.out.print((char)(letters++)+" ");
            }
            System.out.println();
        }


    }}

