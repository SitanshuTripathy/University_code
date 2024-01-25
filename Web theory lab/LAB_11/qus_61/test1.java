package LAB_11.qus_61;

import java.util.Scanner;

/*
illustrate the use of packages using package hierarchy.
 */
public class test1 {
    int roll;
    String name;
    int mark ;
    Scanner sc =new Scanner(System.in);
      public void input(){
          System.out.println("Enter name =");
          name=sc.nextLine();
        System.out.println("Enter the roll =");
        roll=sc.nextInt();
          System.out.println("Enter the mark =");
          mark=sc.nextInt();

    }
    public void output(){
        System.out.println("The name = "+name);
        System.out.println("roll = "+roll);
        System.out.println("mark = "+mark);
    }

}
