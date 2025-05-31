#include<iostream>
using namespace std;
int main()
{
     int startyear,endyear;
     cout<<"enter the start year:";
     cin>>startyear;
    cout<<"enter the end year:";
     cin>>endyear;
     cout<<"leap year is between "<<startyear<<" and "<<endyear<<" are: "<<endl;
     for(int year=startyear;year<=endyear;year++){
     if((year%4==0 &&year%100!=0)||(year%400==0))
    {
        cout<<year<<endl;
    }
}
     return 0;
    }
    