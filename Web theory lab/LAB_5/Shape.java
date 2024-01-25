package LAB_5;


    class Calculate{
        static double area(double radius){
            return (3.14*radius*radius);
        }

        static int area(int length){
            return (length*length);

        }

        static double area(double length,double breadth){
            return (length*breadth);
        }




    }

    public class Shape {
        public static void main(String args[]){
            Calculate cal  = new Calculate();
            System.out.print("Area of Circle: "+ cal.area(5.9));
            System.out.println();
            System.out.print("Area of Square: "+ cal.area(5));
            System.out.println();
            System.out.print("Area of Rectangle: "+ cal.area(5.3,9.8));
            System.out.println();


        }
    }

