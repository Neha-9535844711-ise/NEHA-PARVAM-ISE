#include<iostream>
using namespace std;
 class Employee
{
    public:
    Employee()
    {
        cout<<"default constructor invoked"<<endl;
    }
    ~Employee()
    {
        cout<<"destructor evoked \n";

    }
};
int main(void)
{
    cout<<"in main fun\n";
    Employee e1;
    cout<<"second object\n";
    Employee e2;
    cout<<"end main fun \n";
    return 0;
}