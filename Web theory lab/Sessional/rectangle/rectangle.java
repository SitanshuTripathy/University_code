package Sessional.rectangle;

import Sessional.Shape.paint;

public class rectangle extends paint {
    public void area(){
        int ar =l*b;
        System.out.println("rect area="+ar);
    }

    @Override
    public void circumference() {
        System.out.println("NO crfm");
    }
}