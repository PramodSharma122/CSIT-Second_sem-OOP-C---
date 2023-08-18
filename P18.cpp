/*
Write a program that illustrates the concept of dynamic polymorphism.
*/

#include<iostream>
using namespace std;
class A {
    public:

    virtual void function() {
        cout<<"Fun from parent class A"<<endl;
    }
};

class B : public A {
    public:

    void function() {
        cout<<"Function from child class B"<<endl;
    }
};

int main() {
    A *ptr;
    B obj;
    ptr=&obj;
    ptr->function();
    return 0;
}