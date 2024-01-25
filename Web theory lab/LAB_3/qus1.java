package LAB_3;

import java.util.Scanner;

public class qus1 {
    public static void main(String[] args) {
        Scanner avi= new Scanner(System.in);
        System.out.println("enter value of number1 =");
        float number1= avi.nextFloat();
        System.out.println("enter value of number2 =");   float number2= avi.nextFloat();

        System.out.println("Choose between 1 to 4 for the operations :");
        int  result = avi.nextInt();
        switch(result) {
            case 0:

            break;
            case 1:
                float d=number1+number2;
                System.out.println(d);
                break;
            case 2:
                float e=number2-number1;
                System.out.println(e);break;
            case 3:
                float m=number2*number1;
                System.out.println(m);break;
            case 4 :
                double div = number1/number2;
                System.out.println(div);break;
            default:
                System.out.println("error");

        }
    }
}
