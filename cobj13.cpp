#include<iostream>
using namespace std;
 class Employee
{
    public:
    int id;
    string name;
    float salary;
    Employee(int i,string n,float s)
    {
        id=i;
        name=n;
        salary=s;
    }
void display(){
    cout<<id<<" "<<name<<" "<<salary<<endl;
}
};
int main(){
    int id;
    float salary;
    string name;
    cout<<"enter your id:"<<endl;
    cin>>id;
    cout<<"enter your name :"<<endl;
    cin>>name;
    cout<<"enter salary :"<<endl;
    cin>>salary;

    Employee e1=Employee(id,name,salary);
    
    e1.display();
    e2.display();
    return 0;
}