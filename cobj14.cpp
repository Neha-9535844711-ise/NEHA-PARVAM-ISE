#include<iostream>
using namespace std;
 class Shape{
    public:
     void  CalculateArea(){
        cout<<"area not defined for generic shape"<<endl;
    }
 };
 class Circle:public Shape
{
    private:
    double radius;
    public:
    Circle(double r)
    {
         cout<<"enter the value of radius:"<<endl;
        cin>>r;
        radius=r;
    }
        double CalculateArea(){
        const double pi=3.141;
        return pi*radius*radius;
    
    }
};
 class Rectangle:public Shape
 {
    private:
    double length;
    double width;
    public:
    Rectangle(double l, double w)
    {
        cout<<"enter the value of length:"<<endl;
        cin>>l;
        cout<<"enter the value of width:"<<endl;
        cin>>w;
         length=l;
        width=w;
 }
 double CalculateArea(){
    return length*width;
 }
};
class Triangle:public Shape{
    private:
    double base;
    double height;
    public:
    Triangle(double b,double h){
        cout<<"enter the value of base:"<<endl;
        cin>>b;
        cout<<"enter the value of height:"<<endl;
        cin>>h;
        base=b;
        height=h;
    }
    double CalculateArea(){
        return 0.5*base*height;
    }
};
 int main()
{
    Circle c(5);
    Rectangle rectangle(8,9);
    Triangle triangle(5,6);
    Shape s;
    s.CalculateArea();
    cout<<"area of circle: "<<c.CalculateArea()<<endl;
    cout<<"area of rectangle: "<<rectangle.CalculateArea()<<endl;
    cout<<"area of triangle: "<<triangle.CalculateArea()<<endl;
    return 0;
}