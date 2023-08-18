/*
Write a program according to the specification given below: 
• Create a class Teacher with data members, tid & subject and member functions for reading and displaying data members. 
• Create another class Staff with data members, sid & position, and member functions for reading and displaying for data members. 
• Derive a class Coordinator from the Teacher and Staff and the class must have its own data member department and member functions for reading and displaying data members. 
• Create two objects of the Coordinator class and read and display their details. 
*/

#include<iostream>
using namespace std;
class Teacher {
    int tid;
    string subj;
    public:

    void getdata() {
        cout<<"Enter teacher id: ";
        cin>>tid;
        cout<<"Enter your subject: ";
        cin>>subj;
        cout<<endl;
    }
    void displaydata() {
        cout<<"Teacher ID: "<<tid<<endl;
        cout<<"Subject: "<<subj<<endl;
    }
};

class staff {
    int sid;
    string position;
    public:

    void getdata() {
        cout<<"Enter your sid: ";
        cin>>sid;
        cout<<"Enter your position: ";
        cin>>position;
        cout<<endl;
    }
    void displaydata() {
        cout<<"Staff ID: "<<sid<<endl;
        cout<<"Position: "<<position<<endl;
    }
};

class coordinator : public Teacher, public staff {
    string department;
    public:

    void getdata() {
        Teacher::getdata();
        staff::getdata();
        cout<<"Enter your department: ";
        cin>>department;
        cout<<endl;
    }
    void displaydata() {
        Teacher::displaydata();
        staff::displaydata();
        cout<<"Department: "<<department<<endl;
    }
};

int main() {
    coordinator c1, c2;
   
    c1.getdata();
    cout<<endl;
    c1.displaydata();
    cout<<endl <<endl;
    
 
cout<<"Next Object Input:"<<endl;
cout<<endl;
    c2.getdata();
    cout<<endl;
    c2.displaydata();
    return 0;
}