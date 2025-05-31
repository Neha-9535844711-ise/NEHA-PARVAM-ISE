#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter num1:"<<endl;
    cin>>num1;
     cout<<"enter num2:"<<endl;
    cin>>num2;
    try
    {
        if(num2==0)
        throw(num2);
        else{
            cout<<num1/num2;
        }
    }
    catch(int n2)
    {
        cout<<"division by zero error:annot divide by "<<n2<<endl;
    }
}