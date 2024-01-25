package LAB_10;

import java.util.Scanner;

/*
Define an interface with three methods – earnings(), deductions()
and bonus() and define a Java class “Manager” which uses this
interface without implementing bonus() method. Also define
another Java class “SubStaff” which extends from “Manager”
class and implements bonus() method. Write the complete
program to find out earnings, deduction and bonus of a sub-staff
with basic salary amount entered by the user as per the following
guidelines –
earnings → basic + DA (80% of basic) + HRA (15% of basic)
deduction PF → 12% of basic
bonus → 50% basic
 */
interface company{

    void earning(float bs);
    void deduction(float bs);
    double bonus( float bs);
}
class  manager implements company{


   public void earning(float bs){
       double earning= bs+(0.8*bs)+(0.15*bs);
       System.out.println("Earning = "+earning );
   }

    @Override
    public void deduction(float bs) {
        double ded=0.12*bs;
        System.out.println("Deduction = "+ded );
    }

    @Override
    public double bonus(float bs) {
        return 0;
    }
}
class substaff extends manager{
    @Override
    public double bonus(float bs) {
        double bonus= 0.5* bs;
        System.out.println("Bonus = "+bonus);
        return 0;
    }
}
public class qus3 {
    public static void main(String[] args) {
        float bs;
            System.out.println("Enter the basic pay = ");
            Scanner sc =new Scanner(System.in);
            bs= sc.nextFloat();

        company m= new substaff();

    m.earning(bs);m.bonus(bs);m.deduction(bs);

    }

}
