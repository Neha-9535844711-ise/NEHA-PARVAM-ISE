 #include<iostream>
using namespace std;
int main()
{
    int a=20;
    int b=10;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    cout<<"before swapping :"<<&a <<&b<<endl;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
     
 cout<<"after swapping "<<"*p1 "<<*p1<<" and"<<" *p2 "<<*p2<<endl;
return 0;
}