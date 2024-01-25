package LAB_8;
class A{
    void show(){
        System.out.println("AAA");
    }
}
class B extends LAB_8.A {
    void show(){
        System.out.println("BBB");
    }
}
public class qus1 {
    public static void main(String[] args) {
        LAB_8.A a= new LAB_8.A();
        B b= new B();
         LAB_8.A r;
         r=a; r.show();
        r=b;r.show();
    }
}
