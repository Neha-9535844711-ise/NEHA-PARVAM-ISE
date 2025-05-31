#include<iostream>
using namespace std;
 class ArrayCalculator
{
    private:
    int arr[100];
    int size;
    public:
    ArrayCalculator(int inputarr[],int inputsize){
        for(int i=0;i<=inputsize;i++){
            arr[i]=inputarr[i];
        }
        size=inputsize;
    }
int calculateSum(){
    int sum=0;
    for(int i=0;i<size;i++)
{
    sum+=arr[i];
}
return sum;
}
double calculateAverage()
{
    return (double)calculateSum/size;
}
void displayArray(){
    for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
};
int main()
{
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
ArrayCalculator calculator(arr,size);
cout<<"Array"<<endl;
calculator.displayArray();
cout<<"sum:"<<calculator.calculateSum()<<endl;
cout<<"average:"<<calculator.calculateAverage()<<endl;
return 0;
}

