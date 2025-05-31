#include<iostream>
using namespace std;
int main()
{
    int size,i;
      cout<<"enter the size of array :";
    cin>>size;
    int arr[size];
     cout<<"enter the elements of array:";
    for(i=0;i<size;i++)
    {
     cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of the elements of array:"<<sum<<endl;
    return 0;
}
    
