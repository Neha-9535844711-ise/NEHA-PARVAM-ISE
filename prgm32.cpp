#include<iostream>
using namespace std;
int main()
{
    int rows,columns;
    int i,j,k;
     cout<<"enter the number of rows:";
    cin>>rows;
    cout<<"enter the number of columns:";
    cin>>columns;
    for(i=1;i<=rows;i++){
        for(j=1;j<=columns;j++){
            cout<<"*";
        }
         cout<< endl;
    }
    return 0;
}