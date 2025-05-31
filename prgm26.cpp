#include<iostream>
using namespace std;
int main()
{
    int rows;
    int i,j;
     cout<<"enter the number of rows:";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}