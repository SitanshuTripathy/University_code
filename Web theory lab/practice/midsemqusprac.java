package practice;



class Aa {
    private final void f1(){System.out.print("a");}
}
class Bb extends Aa {
    private final void f1(){System.out.print("b");}

    public static void main(String[] args) {


        new Bb().f1();
    } }




