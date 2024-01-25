package LAB_10;
/*
Define an interface Motor with a data member –capacity and
two methods such as run() and consume(). Define a Java class
“Washing machine” which implements this interface and write
the code to check the value of the interface data member thru an
object of the class.
 */
interface Motor{
  int capacity=8;
    void run();
    void consumer();
}
class wm implements Motor{
   public  void run(){
        System.out.println("The run = "+capacity);
    }
     public void consumer(){
        System.out.println("the consumer ="+capacity);
    }
}
public class qus2 {
    public static void main(String[] args) {

        Motor m=new wm();
        m.run();
        m.consumer();
    }

}
