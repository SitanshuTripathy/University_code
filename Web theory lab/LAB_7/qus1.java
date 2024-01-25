package LAB_7;

class A{
    int m ,n;
    A(int m,int n){
        this.m=m;
        this.n=n;
    }
   public void disp(){
       System.out.println(m+" "+n);
   }
}
class B extends A{

    B(int m, int n) {
        super(m, n);
    }

    public void wt(){
        System.out.println(m +" "+n);
        super.disp();
    }
}
public class qus1 {
    public static void main(String[] args) {
        A ob=new A(8,9);
        ob.disp();
        B ob2=new B(7,4);
        ob2.wt();
    }
}
