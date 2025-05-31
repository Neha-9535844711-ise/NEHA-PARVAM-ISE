#include<iostream>
 using namespace std;
 bool isprime(int num)
{
if (num<=1){
    return false;
}
for(int i=2;i*i<=num;i++)
{
    if(num%i==0)
    {
        return false;
    }
}
return true;
}
int reverse(int num)
{
    int reversed=0;
    while(num!=0)
    {
        reversed=reversed*10+num%10;
        num/=10;
    }
    return reversed;
}
int main()
{
    int num,reversed;
    cout<<"enter a number:";
    cin>>num;

if(isprime(num))
{
    cout<<num<<" is a prime number"<<endl;
}
else
{
    cout<<num<<" is not a prime number"<<endl;
}
reversed=reverse(num);
cout<<"reversed number:"<<reversed<<endl;
return 0;
}