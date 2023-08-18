/*
Write a program to convert inches into centimeters.
*/

#include<iostream>
using namespace std;
class length {
    float inch;
    public:

    void getdata() {
        cout<<"Enter inch: ";
        cin>>inch;
    }

    float getinch() {
        return inch;
    }
};

class lengthd {
    float cm;
    public:

    lengthd() {
        
    }

    lengthd(length c) {
        float i = c.getinch();
        cm=i*2.54;
    }

    void display() {
        cout<<"After conversion: "<<cm<<endl;
    }
    
}; 

int main() {
    length ls;
    ls.getdata();
    lengthd ld;
    ld=ls;
    ld.display();
}