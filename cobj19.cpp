#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age:"<<endl;
    cin>>age;
    try
    {
        if(age<18)
        throw(age);
    else
    cout<<"access give";
    }
    catch(int a)
    {
        cout<<"your age is less than 18 ,which is "<<age<<endl;
    }
}