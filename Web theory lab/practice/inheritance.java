package practice;

import java.util.Scanner;
class student
    {
       String roll;
      String name;
      int section;
       String university_name;

    }
    class name extends student
    {
        public void getdata()
        {
            System.out.println("enter the name of student,roll no and the university name :");
            Scanner input=new Scanner(System.in);
            String name=input.nextLine();
            int roll=input.nextInt();
            String university_name=input.nextLine();
        }

        public void putdata()
        {
            System.out.println("the names are:" +name);
            System.out.println("the roll numbers are:" +roll);
            System.out.println("the university name is :" +university_name);
        }
    }
    class marks extends student
    {
        public void total()
        {
            int a,b,c;
            System.out.println("enter the marks of three subjects :");
            Scanner input=new Scanner(System.in);
            a=input.nextInt();
            b=input.nextInt();
            c=input.nextInt();
            int t= a+b+c;
            System.out.println("the total marks of the subjects are:" +t);
        }
        public void average()
        {

            int t = 0;
            int avg= t/3;
            System.out.println("the average of the marks is" +avg);

        }
    }

public class inheritance {
        public static void main(String[]args)
        {
            marks s11 = new marks();
            
            s11.total();
            s11.average();
        }
    }

