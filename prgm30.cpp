#include<iostream>
using namespace std;
int main()
{
    int rows;
    char ch='a';
    int i,j,k;
     cout<<"enter the number of rows:";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
             cout<<" ";
        }
              for(k=1;k<=i;k++){
            cout<<ch<<" ";
        }
        ch++;
        cout<< endl;
    }
    return 0;
}