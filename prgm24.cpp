#include<iostream>
using namespace std;
int main()
{
    int rows1,columns1,rows2,columns2,i,j,k;
    
    cout<<"enter the number of rows1:";
    cin>>rows1;
    cout<<"enter the number of columns1:";
    cin>>columns1;
     cout<<"enter the number of rows2:";
    cin>>rows2;
    cout<<"enter the number of columns2 :";
    cin>>columns2;
    if(rows2!=columns1)
    {
        cout<<"matrix multiplication invalid";
        return 0;
    }
    int matrix1[rows1][columns1],matrix2[rows2][columns2],multi[rows1][columns2];
    
         cout<<"enter the elements of matrix1:";
    for(i=0;i<rows1;i++){
for(j=0;j<columns1;j++)
{
    {
     cin>>matrix1[i][j];
    }
}
    }

cout<<"enter the elements of matrix2:";
 for(i=0;i<rows2;i++)
 {
for(j=0;j<columns2;j++)
{
    {
     cin>>matrix2[i][j];
    }
}
}
cout<<" matrix1:"<<endl;
 for(i=0;i<rows1;i++)
 {
for(j=0;j<columns1;j++)
{
    cout<<matrix1[i][j]<<" ";
}
cout<<endl;
 }
 cout<<" matrix2:"<<endl;
 for(i=0;i<rows2;i++)
 {
for(j=0;j<columns2;j++)
{
    cout<<matrix2[i][j]<<" ";
}
cout<<endl;
 }
 for(i=0;i<rows1;i++){
for(j=0;j<columns2;j++)
{
 for(k=0;k<columns1;k++)
    {
     multi[i][j]+=matrix1[i][k]*matrix2[k][j];
    }
}
}
 cout<<"product of the matrices:"<<endl;
    for(i=0;i<rows1;i++){
    {
            for(j=0;j<columns2;j++)
        cout<<multi[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}


