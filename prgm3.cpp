#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,m4,m5;
    int total;
    float average;
    cout<<"enter marks for subject 1:";
    cin>>m1;
    cout<<"enter marks for subject 2:";
    cin>>m2;
    cout<<"enter marks for subject 3:";
    cin>>m3;
    cout<<"enter marks for subject 4:";
    cin>>m4;
    cout<<"enter marks for subject 5:";
    cin>>m5;
    total=m1+m2+m3+m4+m5;
    average=total/5.0;
    cout<<"total marks="<<total<<endl;
    cout<<"average="<<average<<endl;
    if(average>90)
    {
     cout<<"GRADE=A"<<endl;   
    }
    else if(average>70)
        {
     cout<<"GRADE=B"<<endl;   
    }
     else
    {
     cout<<"GRADE=C"<<endl;   
    }
    return 0;
}