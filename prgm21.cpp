#include<iostream>
using namespace std;
int main()
{
    int num;
     cout<<"enter the number:";
    cin>>num;
     if(num % 2==0)
    {
        cout<<"the given number "<<num<<" is even";
    }
    else
    { 
        cout<<"the given number "<<num<<" is odd";
    }
    return 0;
}