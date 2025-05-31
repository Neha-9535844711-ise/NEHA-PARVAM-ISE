 #include<iostream>
using namespace std;
 class Employee
{
    protected:
    int id;
    string name;
    float basesalary;
    Employee(int i,string n,float s):id(i),name(n),basesalary(s){}
    
     virtual void CalculateSalary(){
        cout<<"base salary:"<<basesalary<<endl;
    }
    virtual void display(){
        cout<<"Name::"<<name<<endl;
        cout<<"Id:"<<id<<endl;
 
    }
};
class Manager:public Employee{
    private:
    float bonus;
    public:
    Manager(int i,string n,float s,float b):Employee(i,n,s),bonus(b){}
    void CalculateSalary(){
        float salary=basesalary+bonus;
        cout<<"total salary:"<<salary<<endl;
    }
    void display(){
        cout<<"manager details"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        CalculateSalary();
    }
    
};
class Developer:public Employee{
    private:
    float overtimepay;
    public:
    Developer(int i,string n,float s,float ob):Employee(i,n,s),overtimepay(ob){}
    void CalculateSalary(){
        float totalsalary=basesalary+overtimepay;
        cout<<"total salary:"<<totalsalary<<endl;
    }
     void display(){
        cout<<"developer details"<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        CalculateSalary();
    }
};
int main()
{
    Manager m(101,"trisha",50000,10000);
    m.display();
    cout<<endl;
    Developer d(102,"varsha",45000,20000);
    d.display();
    return 0;
}
 
