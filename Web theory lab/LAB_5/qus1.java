package LAB_5;

import java.util.Scanner;
       class shape {
           public void area(double r) {
            System.out.print("The area of circle =" + r * r * 3.14);
            System.out.println();
        }
        public void area(int l) {
            System.out.print("The area of square =" + l * l);
            System.out.println();
        }
        public void area(int l, int b) {
            System.out.print("The area of rectangle =" + l * b);
            System.out.println();
        }
    }
    public class qus1 {
        public static void main(String[] args) {
            Scanner sc= new Scanner(System.in);
            shape ob=new shape();
            int n,o;double m;
            System.out.print("enter radius =");m=sc.nextDouble();
            System.out.print("Enter length =");n=sc.nextInt();
            System.out.print("Enter breadth =");o=sc.nextInt();

            ob.area(m);ob.area(n);ob.area(n,o);
        
        }
    }

