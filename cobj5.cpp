#include<iostream>
using namespace std;
 class Polygon{
    public:
    double CalculateArea(){
        return 0;
    }
 };
 class Rectangle:public Polygon
 {
    private:
    double length;
    double width;
    public:
    Rectangle(double l, double w)
    {
        cout<<"enter the value of length:"<<endl;
        cin>>l;
        out<<"enter the value of width:"<<endl;
        cin>>w;
         length=l;
        width=w;
 }
 double CalculateArea(){
    return length*width;
 }
};
class Triangle:public Polygon{
    private:
    double base;
    double height;
    public:
    Triangle(double b,double h){
        base=b;
        height=h;
    }
    double CalculateArea(){
        return 0.5*base*height;
    }
};
 int main()
{
    Rectangle rectangle(length,width);
    Triangle triangle(base,height);
    cout<<"area of rectangle: "<<rectangle.CalculateArea()<<endl;
    cout<<"area of trinagle: "<<triangle.CalculateArea()<<endl;
    return 0;
}