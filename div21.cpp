#include<iostream>
using namespace std;
int main()
{
     int choice;
     float temp;
     cout<<"The temperature conversion program"<<endl;
     cout<<"1.celsius to fahrenheit"<<endl;
     cout<<"2. fahrenheit to celsius"<<endl;
     cout<<"enter the choice :";
     cin>>choice;
     switch(choice)
     {
        case 1:
        cout<<"enter the tempertaure in celsius: ";
        cin>>temp;
        cout<<temp<<" Celsius is equal to: "<<(temp*9.0/5.0)+32.0<<" fahrenheit "<<endl;
        break;
         case 2:
        cout<<"enter the tempertaure in fahrenheit: ";
        cin>>temp;
        cout<<temp<<" fahrenheit is equal to: "<<((temp-32.0)*5.0/9.0)<<" celsius "<<endl;
        break;
        default:
        cout<<"invalid choice"<<endl;
     }
     return 0;
    }