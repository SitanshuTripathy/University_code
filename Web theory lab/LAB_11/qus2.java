package LAB_11;

import java.util.Scanner;

/*
 consider a class employee with data members empid and empname. 2 methods getdata() for input & putdata() for o/p.
 write a user data exception if the empid enterred is less than equals 0. consider the msg to be printed as "invalid user"
 */
class employee{
    String name;
    int id;

    public void getdata(){
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the name =");
        name=sc.nextLine();
        System.out.println("Enter the id =");
        id=sc.nextInt();
    }
    public  void outdata(){
        System.out.println("The name of the employee ="+name);
        System.out.println("The employee id = "+id);
    }
}
 class exception extends  Exception{
    exception(String s) {
  super(s);
    }

}
public class qus2 {
    public static void main(String[] args) {
        employee ep = new employee();
        ep.getdata();
        try {
            if(ep.id<0){

                throw  new exception("Invalid user");
            }
else
    ep.outdata();
        }
        catch (exception e){
            System.out.println(e);
        }
    }

}
