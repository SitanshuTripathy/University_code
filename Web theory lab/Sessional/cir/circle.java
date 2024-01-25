package Sessional.cir;

import Sessional.Shape.paint;

public class circle extends paint {
    public void area(){
        int ar = (int) (3.14*r*r);
        System.out.println("circle area="+ar);
    }
    public void circumference(){
        double cr =2*3.14*r;
        System.out.println("circle crm ="+cr);
    }
}