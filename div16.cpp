#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string:"<<endl;
    getline(cin,str);
    string result=" ";
for(char c:str)
{
    int count=0;
for(char d: result)
    {
        if(c==d)
        {
        count++;
    }
}
if(count==0)
{
    result+=c;
}
}
cout<<"string after removing repeated character:"<<result<<endl;
return 0;
}