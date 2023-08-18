/*
Define a clock class (with necessary constructors and member functions) in Object Oriented Programming (abstract necessary attributes and their types). (Write a complete code in C++ programming language). Derive a wall_clock class from clock class adding necessary attributes. Create two objects of wall_clock class with all initial state to 0 or NULL.
*/

#include<iostream>
using namespace std;
class clock{
    public:
    int hours;
    int minutes;
    int seconds;

    clock(){}
    clock(int hr,int min,int sec){
        hours=hr;
        minutes=min;
        seconds=sec;
    }

    void getdata(){
        cout<<"Enter hours: "<<endl;
        cin>>hours;
        cout<<"Enter minutes: "<<endl;
        cin>>minutes;
        cout<<"Enter seconds: "<<endl;
        cin>>seconds;
    }
};

class wall_clock:public clock{
    int price;

    public:
    wall_clock(){}
    wall_clock(int hr,int min,int sec,int p):clock(){
        price=p;
    }

    void getdata(){
        clock::getdata();
        cout<<"Enter price of the wall clock: "<<endl;
        cin>>price;
    }

    void display(){
        cout<<"HOURS: "<<hours<<endl;
        cout<<"MINUTES: "<<minutes<<endl;
        cout<<"SECONDS: "<<seconds<<endl;
        cout<<"PRICE: "<<price<<endl;
    }
};

int main(){
    wall_clock w1,w2;
    w1.getdata();
    cout<<endl;
    w1.display();
    w2.getdata();
    cout<<endl;
    w2.display();
}