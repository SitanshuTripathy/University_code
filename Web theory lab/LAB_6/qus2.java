package LAB_6;

import java.util.Scanner;
class student{
        int roll;
        String name;
        float cgpa;
        public void input(){
                Scanner sc =new Scanner(System.in);
                System.out.print("Enter the name =");  name=sc.nextLine();
                System.out.print("Enter roll = ");   roll= sc.nextInt();
                System.out.print("Enter cgpa =");cgpa=sc.nextFloat();
        }
        public void display(){
                System.out.println("The name of student ="+name);
                System.out.println("roll ="+roll);
                System.out.println("cgpa ="+cgpa);
 }
       public  void comp(student[] ob,int m){
         int low = 0;
         for(int i=0;i<m;i++){

             if(ob[low].cgpa>ob[i].cgpa)
                 ob[low]=ob[i];
         }
           System.out.println("The student secure lowest ="+ob[low].name);
           System.out.println("cgpa ="+ob[low].cgpa);
           System.out.println("Roll ="+ob[low].roll);
       }
}
public class qus2 {
        public static void main(String[] args) {
            System.out.print("Enter the number of students =");
                Scanner a =new Scanner(System.in);
                int m=a.nextInt();
                student[] st = new student[m];
                student st2 =new student();
                for (int i=0;i<m;i++){
                        st[i]=new student();
                        st[i].input();
                }

                for (int i=0;i<m;i++){
                     st[i].display();
                }

                st2.comp(st,m);
        }}
