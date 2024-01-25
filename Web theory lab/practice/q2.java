package practice;

import java.util.Scanner;

class Employee extends Exception {
    String error;
    Employee(String error) {
        super(error);
        this.error=error;
    }

    @Override
    public String toString() {
        return error;
    }
}

public class q2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter empname, empid");
        String empname = sc.nextLine();
        int empid = sc.nextInt();
        try {
            if(empid<0){
                throw new Employee("invalid user"+empid);
            }
        }
        catch(Employee err) {
            System.out.println(err);
            System.out.println(err.getMessage());
        }
    }
}
