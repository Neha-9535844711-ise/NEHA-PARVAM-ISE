#include<iostream>
int main()
{
    std::string name,branch,college;
    int year,sem;
    std::cout<<"enter your name:";
    std::getline(std::cin,name);
    std::cout<<"enter your branch:";
    std::getline(std::cin,branch);
    std::cout<<"enter your year:";
    std::cin>>year;
    std::cout<<"enter your semester:";
    std::cin>>sem;
    std::cout<<"enter your college:";
    std::getline(std::cin,college);
    std::cout<<"\n your details"<<std::endl;
    std::cout<<"\n NAME:"<<name<<std::endl;
    std::cout<<"\n BRANCH:"<<branch<<std::endl;
    std::cout<<"\n YEAR:"<<year<<std::endl;
    std::cout<<"\n SEMESTER:"<<sem<<std::endl;
    std::cout<<"\n COLLEGE:"<<college<<std::endl;
    return 0;
}
