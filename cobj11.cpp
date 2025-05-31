 #include<iostream>
using namespace std;
 class Base{
    protected:
    int value; 
    public:
    Base(int v){
        value=v;
    }
 };
 class Derived : public Base{
    public:
    Derived(int v):Base(v){}
    void displayValue(){
        cout<<"value:"<<value<<endl;
    }
    void modifyValue(int newValue){
        value=newValue;
    }
 };
 int main()
 {
    int initialValue,newValue;
    cout<<" enter the initial value :"<<endl;
    cin>>initialValue;
    Derived d(initialValue);
    d.displayValue();
    cout<<" enter the new value :"<<endl;
    cin>>newValue;
    d.modifyValue(newValue);
    d.displayValue();
    return 0;
    
 }