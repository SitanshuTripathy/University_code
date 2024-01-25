package cw1.src.multilevel;

class Account{
    int balance=10000;
    int acctno;
    public  void displaybalance(){
        System.out.println("The balance = "+balance);
    }

}
class employer extends Account{
    int erid =667;
    int date=2015;
   public void displayer(){
       System.out.println("The employer = "+erid+" , "+date);
       super.displaybalance();
   }
}
class employee extends employer{
    int empid=88;
    int projectid=743;

    public  void show(){
        System.out.println("The employee = "+empid+" , "+projectid);
        super.displayer();
    }
}
public class qus1 {
    public static void main(String[] args) {
        employee er= new employee();
        er.show();
    }
}
