#include<iostream>
#include<string>
 using namespace std;
 int main()
 {
    string str;
    cout<<"enter a string:"<<endl;
    cin>>str;
  int count=0;
  for(char c:str)
  {
    switch(tolower(c))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        count++;
        break;
    }
  }
    cout<<"number of vowels: "<<count<<endl;
    return 0;
 }
 