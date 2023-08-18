/*
Write a program to add time in hours and minutes of two different objects using friend function
*/

#include<iostream>
using namespace std;
class Time{
    public:
    int hours, minutes;

    void getdata(){
        cout<<"Enter the hours: ";
        cin>>hours;
        cout<<"Enter the minutes: ";
        cin>>minutes;
    }

    friend Time add(Time,Time);

    void displaytime(){
        cout<<hours<<":"<<minutes<<" min"<<endl;
    }
};

Time add(Time a,Time b){
    Time add;
    add.hours = a.hours + b.hours;
    add.minutes = a.minutes + b.minutes;
    if (add.hours < 0 || add.hours > 60)
    {
        add.hours = 0;
    }
    if (add.minutes < 0 || add.minutes > 60)
    {
        add.hours += add.minutes/60;
        add.minutes = add.minutes%60;

    }
    return add;
}

int main(){
    Time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3 = add(t1,t2);
    t3.displaytime();
}