#include<iostream>
using namespace std;
int main()
{
    int rows,columns,i,j;
    
    cout<<"enter the number of rows:";
    cin>>rows;
    cout<<"enter the number of columns :";
    cin>>columns;
    int matrix1[rows][columns],matrix2[rows][columns],sum[rows][columns];
     cout<<"enter the elements of matrix1:";
    for(i=0;i<rows;i++){
for(j=0;j<columns;j++)
{
    {
     cin>>matrix1[i][j];
    }
}
}
cout<<"enter the elements of matrix2:";
 for(i=0;i<rows;i++)
 {
for(j=0;j<columns;j++)
{
    {
     cin>>matrix2[i][j];
    }
}
}
for(i=0;i<rows;i++){
for(j=0;j<columns;j++)
{
    {
     sum[i][j]=matrix1[i][j]+matrix2[i][j];
    }
}
}

cout<<" matrix1:"<<endl;
 for(i=0;i<rows;i++)
 {
for(j=0;j<columns;j++)
{
    cout<<matrix1[i][j]<<" ";
}
cout<<endl;
 }
 cout<<" matrix2:"<<endl;
 for(i=0;i<rows;i++)
 {
for(j=0;j<columns;j++)
{
    cout<<matrix2[i][j]<<" ";
}
cout<<endl;
 cout<<"sum of the matrices:"<<endl;
    for(i=0;i<rows;i++){
    {
            for(j=0;j<columns;j++)
        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
}
    