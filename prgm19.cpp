#include<iostream>
using namespace std;
int main()
{
    int dec=0,binary,rem,base=1;
    cout<<"enter a binary number:";
    cin>>binary;
    while(binary>0)
    {
        rem=binary%10;
        dec+=rem*base;
        binary/=10;
        base*=2;
    }
    cout<<"decimal representation:"<<dec<<endl;
    return 0;
}