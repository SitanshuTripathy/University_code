package practice;
abstract class Student {
    int roll = 585, reg = 1219;
    abstract void course();
}
class kiitian extends Student
{
    void course() {
        System.out.println("roll = " + roll + " reg = " + reg);
    }}

public class qus10prac {
    public static void main(String args[]) {
        Student obj;
        obj = new kiitian();
        obj.course();
    }
}
