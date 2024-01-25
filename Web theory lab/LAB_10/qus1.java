/* Illustrate the usage of abstract class with following Java classes
i) An abstract class “student” with data member roll no, reg no
and an abstract method course()
ii) A subclass “kiitian” with course() method implementation */

package LAB_10;
abstract class student{
    int roll,regdno;
    abstract void course();
}
class kiitian extends  student{
    @Override
    public void course() {
        System.out.println("The course choosed is CSE");
    }
}
public class qus1 {
    public static void main(String[] args) {
    kiitian kt = new kiitian();
    kt.course();
    }
}
