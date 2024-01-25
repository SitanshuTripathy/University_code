package LAB_6;

import java.util.Scanner;

public class qus3 {
    public static void main(String arg[])
        {
            int shapes;
            double area;
            int height, base;
            int side;
            int radius;
            Scanner areas = new Scanner(System.in);
            System.out.println("1. triangle");
            System.out.println("2. square");
            System.out.println("3. cirle");
            System.out.println("4. quit code");
            lp : while(true)
            {
                System.out.print("enter shape choice ");
                shapes = areas.nextInt();
                switch (shapes)
                {
                    case 1:
                        System.out.print("height of triangle \n");
                        height = areas.nextInt();
                        System.out.print("base of triangle \n");
                        base = areas.nextInt();
                        area = (height * base)/2;
                        System.out.println("area of triangle is " + area + "\n");
                        break;
                    case 2:
                        System.out.print("side of square \n");
                        side = areas.nextInt();
                        area = side*side;
                        System.out.println("area of squre is "+ area + "\n");
                        break;
                    case 3:
                        System.out.print("radius of circle \n");
                        radius = areas.nextInt();
                        area = 3.14*radius*radius;
                        System.out.println("area of cirlec is  " + area + "\n");
                        break;
                    case 4:
                        break lp;
                    default:
                        System.out.println("choice non existent \n");
                }}}
}
