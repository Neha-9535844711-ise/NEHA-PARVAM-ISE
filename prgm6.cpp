#include<iostream>
using namespace std;
long long factorial(int n)
{
    if(n<0)
    {
        cout<<"factorial is not defined for negative numbers."<<endl;
        return -1;

    }
long long fact=1;
for(int i=2;i<=n;i++)
{
    fact*=i;
}
return fact;
}
int main()
{
    int num;
    cout<<"enter a number:";
    cin>>num;
    long long fact=factorial(num);
    if(fact!=-1)
    {
        cout<<"factorial of "<<num<<"="<<fact<<endl;
    }
return 0;
}