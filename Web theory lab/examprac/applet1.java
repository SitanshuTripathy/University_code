package examprac;


import java.util.LinkedList;

public class applet1  {
    public static void main(String[] args) {
        LinkedList<String> ls=new LinkedList<String>();
        ls.add("Usa");
        ls.addFirst("india");
        ls.add(2,"werd");
        ls.addLast("red");
        System.out.println("content = " +ls);
        ls.remove(2);
        System.out.println(ls);
        String st=ls.get(2);
        ls.set(2,st);
        System.out.println(ls);
    }

}
