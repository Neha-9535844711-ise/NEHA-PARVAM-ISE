#include<iostream>
using namespace std;
 class Student{
    private:
    string name;
    int rollno;
    public:
    Student(string n, int r){
        name=n;
        rollno=r;
    }
 void displayInfo(){
    cout<<"name:"<<name<<endl;
    cout<<"roll number:"<<rollno<<endl;
 }
};
int main()
{
    string name;
    int rollno;
     cout<<"enter your name:"<<endl;
     cin>>name;
      cout<<"enter your roll no:"<<endl;
      cin>>rollno;
    Student student(name,rollno);
    cout<<"STUDENT INFORMATION\n";
    student.displayInfo();
    return 0;
}
