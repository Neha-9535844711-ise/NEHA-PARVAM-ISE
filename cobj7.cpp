#include<iostream>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    void display(){
        cout<<"name:"<<name<<" age:"<<age<<endl;
    }
};
int main(){
    Person p;
    p.name="alice";
    p.age=25;
    p.display();
    return 0;
}