#include<iostream>
 using namespace std;
 int main()
 {
    int arr[]={13,7,6,4,3,15,18,20};
    int i,n,j;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"original array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    {
    for(i=0;i=n;i+=2)
    {
        for(j=i+2;j<n;j+=2)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
}
    cout<<"sorted array :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
    return 0;
 }