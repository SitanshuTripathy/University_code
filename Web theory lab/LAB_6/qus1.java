package LAB_6;

import java.util.Scanner;

class rectangle{
    public  int l;
    public int b,pmtr,area;

    public  void read(){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the length =");
        l= sc.nextInt();
        System.out.print("Enter the breadth =");
        b= sc.nextInt();
    }
    public void calc(){
         pmtr=2*(l+b);
         area = l*b;
    }
  public void display(){
      System.out.println("The perimeter of rect = "+pmtr);
      System.out.println("The area = "+area);
  }

}
public class qus1 {
    public static void main(String[] args) {
      rectangle ob= new rectangle();
      ob.read();
      ob.calc();
      ob.display();
    }
}
