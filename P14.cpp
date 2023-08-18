/*
Define a student class (with necessary constructors and member functions) in Object Oriented Programming (abstract necessary attributes and their types). (Write a complete code in C++ programming language). Derive a Computer Science and Mathematics class from student class adding necessary attributes (at least three subjects). Use these classes in a main function and display the averages marks of computer science and mathematics students.
*/

#include<iostream>
using namespace std;

class student{
    public:
    int roll;
    string name;

    student(){
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter student roll num: ";
        cin>>roll;
        cout<<endl;
    }
    
    void display(){
        cout<<"NAME: "<<name<<endl;
        cout<<"ROLL: "<<roll<<endl;
    }
    
};

class ComputerScience :public student{
    public:

    int Database;
    int AI;
    int Networking;

    
    ComputerScience(): student(){
        cout<<"Enter Database Marks: ";
        cin>>Database;
        cout<<"Enter AI Marks: ";
        cin>>AI;
        cout<<"Enter Networking Marks: ";
        cin>>Networking;
        cout<<endl;
    }

    void display(){
        student::display();
        cout<<"Average Marks: "<<(Database + AI + Networking)/3 <<endl;
    }
    
};

class Mathematics :public student{
    public:

    int Statistic;
    int Discrete;
    int Probability;

    
    Mathematics(): student(){
        cout<<"Enter Statistic Marks: ";
        cin>>Statistic;
        cout<<"Enter Discrete Marks: ";
        cin>>Discrete;
        cout<<"Enter Probability Marks: ";
        cin>>Probability;
        cout<<endl;
    }

    void display(){
        student::display();
        cout<<"Average Marks: "<<(Statistic + Discrete + Probability)/3 <<endl;
    }
    
};

int main(){
    ComputerScience C;
    Mathematics M;
    C.display();
    cout<<endl;
    M.display();
}