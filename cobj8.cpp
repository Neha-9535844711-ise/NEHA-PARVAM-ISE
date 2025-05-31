#include<iostream>
using namespace std;
 class Rectangle{
    private:
    float length;
    float width;
    public:
    Rectangle(float l,float w)
    {
        length=l;
        width=w;
    }
     float CalculateArea(){
        return length*width;
     }
    
 };
 
int main()
{
    Rectangle r(5,4);
    Triangle t(6,8);
    cout<<"area of rectangle: "<<r.CalculateArea()<<endl;
    cout<<"area of trinagle: "<<t.CalculateArea()<<endl;
    return 0;
}