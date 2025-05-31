#include<iostream>
using namespace std;
int main()
{
    int num=50;
    int*p;
    p=&num;
    cout<<"address of the number variable:"<<&num<<endl;
     cout<<"address of the p variable:"<<p<<endl;
 cout<<"value of the p variable:"<<*p<<endl;
return 0;
}