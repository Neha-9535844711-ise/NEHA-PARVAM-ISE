#include<iostream>
using namespace std;
int main()
{
 int number,sum=0,count=1;
 while(true)
 {
    cout<<"number["<<count<<"]:";
    cin>>number;
    if(number==0)
    {
        break;
    }
    sum+=number;
    count++;
 }   
     cout<<" the sum of  all numbers is:"<<sum<<endl;
     return 0;
}