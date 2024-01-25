package practice;
import java.util.Scanner;

class studententry{
    String roll;
    int mark;

    public void getdata(){
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter the roll and mark respectively =");
        roll=sc.nextLine();
        mark= sc.nextInt();
    }
    public  void outdata(){
        System.out.println("The roll ="+roll);
        System.out.println("The mark ="+mark);
    }
}
class exceptions extends  Exception{
    exceptions(String s) {
        super(s);
    }

}

public class hw4 {
    public static void main(String[] args) {
        studententry st=new studententry();
        st.getdata();
        try {
            if(st.roll.length()>=7){

                throw  new exceptions("Invalid student user");
            }
            else
                st.outdata();
        }
        catch (exceptions e){
            System.out.println(e);
        }
    }
}
