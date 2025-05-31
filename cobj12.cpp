 #include<iostream>
using namespace std;
 class Circle
 {
    private:
    float radius;
    public:
    Circle(float r=0.0):radius(r){}
    void inputRadius()
    {
        cout<<"enter the radius:";
        while(!(cin>>radius)|| radius<0){
            cout<<"error :invalid input please enter a non negative number"<<endl;
            cin.clear();

        }
    }
    double CalculateArea(){
        const double pi=3.141;
        return pi*radius*radius;
    }
    void displayArea(){
        double area=CalculateArea();
        cout<<"the area of the circle is:"<<area<<endl;
    }
    void displayRadius(){
        cout<<"the radius of the circle is:"<<radius<<endl;
    }
 };
 int main()
 {
 Circle c;
 c.inputRadius();
 c.displayRadius();
 c.displayArea();
 return 0;
 }