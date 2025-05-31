 #include<iostream>
 using namespace std;
 int main()
 {
    int arr[]={13,7,6,4,3,15,18,20};
    int i,n,j;
 n=sizeof(arr)/sizeof(arr[0]);
    
cout<<"original elemnts:";
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i=n-1;i++){
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

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