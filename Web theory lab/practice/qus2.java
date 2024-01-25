package practice;

 class person{
    public void  talk(){
        System.out.println("person");
    }
}
class  student2 extends person{
    @Override
    public void talk() {
        System.out.println("student");
    }
}
public class qus2 {
    public static void main(String[] args) {
    person p= new student2();
    p.talk();
    }
}
