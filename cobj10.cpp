#include<iostream>
using namespace std;
 class Calculator
 {
    public:
    int add(int a,int b);
    int subtraction(int a,int b);
    int multiplication(int a,int b);
    int division(int a,int b);
 };
 int Calculator::add(int a,int b)
 {
    return a+b;
 }
 int Calculator::subtraction(int a,int b){
    return a-b;
 }
 int Calculator::multiplication(int a,int b){
    return a*b;
 }
 int Calculator::division(int a,int b){
    if(b!=0){
    return a/b;
 }
 else{
    cout<<"error:division by zero!"<<endl;
    return 0;
 }
}
int main()
{
    Calculator calculator;
    int num1;
    int num2;
    cout<<"enter the value of num1:";
    cin>>num1;
    cout<<"enter the  value of num2:";
    cin>>num2;
    cout<<"addition of numbers is:"<<calculator.add(num1,num2)<<endl;
    cout<<"subtraction of numbers is:"<<calculator.subtraction(num1,num2)<<endl;
cout<<"multiplication of numbers is:"<<calculator.multiplication(num1,num2)<<endl;
cout<<"division of numbers is:"<<calculator.division(num1,num2)<<endl;
return 0;
}