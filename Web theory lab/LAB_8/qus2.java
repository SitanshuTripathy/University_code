package LAB_8;

abstract  class shape{
    int r=8;
    int l=4;
    int s=2;

  abstract void area();
}
class rectangle extends shape{
    void area(){
        System.out.println("Area of rectangle ="+l*s);
    }
}
class square extends shape{
    @Override
    void area() {
        System.out.println("Area of square ="+s*s);
    }
}
class circle extends shape{
    @Override
    void area() {
        System.out.println("Area of circle ="+3.14*r*r);
    }
}
public class qus2 {
    public static void main(String[] args) {
        rectangle r=new rectangle();
        square s=new square();
        circle c=new circle();
        r.area();//Normal by abstract
        s.area();
        c.area();
        shape ob;

        ob=r;ob.area();//DMD
        ob=s;ob.area();
        ob=c;ob.area();
    }
}
