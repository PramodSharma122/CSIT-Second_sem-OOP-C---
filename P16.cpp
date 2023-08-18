/*
Write a program to add two object of distance class with data members feet and inch by using member function and friend function. 
*/

#include<iostream>
using namespace std;

class Distance{
    public:
    int feet,inch;
    
    void getdata(){
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inch: ";
        cin>>inch;
    }

    friend Distance add_two_object(Distance,Distance);

    void display(){
        cout<<"Distance is: "<<feet<<" . "<<inch<<" feet"<<endl;
    }
};

Distance add_two_object(Distance a,Distance b){
    Distance add;
    add.feet = a.feet + b.feet;
    add.inch = a.inch + b.inch;
    return add;
}
int main(){
    Distance d1,d2,d3;
    cout<<"===============Input==============="<<std::endl;
    d1.getdata();
    d2.getdata();
    d3 = add_two_object(d1,d2);
    cout<<"===============Output==============="<<std::endl;
    d3.display();
    return 0;
}
