package Sessional.sqr;

import Sessional.Shape.paint;

public class square  extends paint {
    public void area(){
        int ar =l*l;
        System.out.println("sqr area="+ar);
    }

    @Override
    public void circumference() {
        System.out.println("NO crfm");
    }
}
