#include <iostream>
#include <string.h>
using namespace std;

class Shape
{
public:
    double height, base;
    void get_data()
    {
        cout << "\nEnter height and base:";
        cin >> height >> base;
    }

    virtual void display_area()
    {
    } 
};

class Triangle : public Shape
{
public:
    void display_area()
    {
        cout << height;
        cout << "\nArea of Triangle = " << (height * base) / 2;
    }
};

class Rectangle : public Shape
{
public:
    void display_area()
    {
        cout << "\nArea of Rectangle = " << height * base;
    }
};
int main()
{

    Shape *s;
    Triangle t;
    t.get_data();
    s = &t;
    s->display_area();
    Rectangle r;
    r.get_data();
    s = &r;
    s->display_area();
}