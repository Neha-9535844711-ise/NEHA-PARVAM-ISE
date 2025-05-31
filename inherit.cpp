#include<iostream>
 using namespace std;
 class Animal
 {
    public:
    void eat()
    {
        cout<<"eating ..."<<endl;
    }
    
 };
 class Dog:public Animal
 {
    public:
    void bark()
    {
        cout<<"barking...."<<endl;
    }
 };
 class Cat:public Animal
 {
    
    public:
    void meow()
    {
        cout<<" meow meow...."<<endl;
    }
    
 };
 int main(void)
 {
    Dog d1;Cat c1;
    d1.eat();
    d1.bark();
    c1.meow();
    c1.eat();
    return 0; 
 }