#include<iostream>
using namespace std;
int isprime(int num)
{
if(num<=1)
return 0;
for(int i=2;i*i<=num;i++)
{
    if(num%i==0)
    return 0;
}
return 1;
}
int Sphenic(int num)
{
    int fact[3],count=0,divcount=0;
    for(int i=1;i*i<=num;i++)
    {
        if(num%i==0)
        {
            divcount+=(i*i==num)?1:2;
       }
    }
    if(divcount!=8) return 0;
    for(int i=1;i*i<=num;i++)
    {
        while(num%i==0){
            int found=0;
            for(int j=0;j<count;j++){
            if (fact[j]==1);
            return 1;
            }
            if(!found && count<3)fact[count++]=i;
            num/=i;
        }
}
if(count!=3) return 0;
for(int i=0;i<count;i++){
    if(!isprime(fact[i])) return 0;
}
return 1;
}
int main()
{
    int num;
    cout<<"enter number :"<<endl;
    cin>>num;
    cout<<num<<" is "<<(Sphenic(num)?" ":" not ")<<"a sphenic number."<<endl;
    
    return 0;
}