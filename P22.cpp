/*
Write a program to convert centigrade into Fahrenheit temperature. (Using type conversion)
*/

#include<iostream>
using namespace std;

class tempr {
    float F;
    public:

    tempr()
    {}

    tempr(float c) {
        F=(c * 9/5) + 32;
    }

    void display() {
        cout<<"Fahrenheit is: "<<F<<endl;
    }
};

int main() {

    float c;
    cout<<"Enter centigrade: "<<endl;
    cin>>c;
    tempr obj;
    obj=c;
    obj.display();
    return 0;
}