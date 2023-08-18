/*
Write a C++ program to represent the above inheritance scheme. Also write a main() function to test the classes, Manager and ComputerOperator, by creating their objects, taking input and displaying the corresponding values.
*/

#include<iostream>
using namespace std;
class Employee{
    public:
    int Id;
    string Name;

    void getdata(){
        cout<<"Enter employee name: "<<endl;
        cin>>Name;
        cout<<"Enter employee ID: "<<endl;
        cin>>Id;
    }

    void putdata(){
        cout<<"NAME: "<<Name<<endl;
        cout<<"ID: "<<Id<<endl;
    }

};

class Manager:public Employee{
    public:
    string Department;

    void getdata(){
        Employee::getdata();
        cout<<"Enter manager Department: "<<endl;
        cin>>Department;
    }

    void putdata(){
        Employee::putdata();
        cout<<"DEPARTMENT: "<<Department<<endl;
    }

};

class ComputerOperator:public Employee{
    public:
    int speed;

    void getdata(){
        Employee::getdata();
        cout<<"Enter Typing_Speed: "<<endl;
        cin>>speed;
    }

    void putdata(){
        Employee::putdata();
        cout<<"TYPING_SPEED: "<<speed<<endl;
    }
};

int main(){
    ComputerOperator C;
    Manager M;
    M.getdata();
    cout<<endl;
    M.putdata();
cout<<endl<<"COMPUTER_OPERATOR:- "<<endl;
    C.getdata();
    cout<<endl;
    C.putdata();
}