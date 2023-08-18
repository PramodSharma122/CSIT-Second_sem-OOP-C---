/*
Write a program to convert kg into gram using user defined to data conversion. 
*/

#include<iostream>
using namespace std;
class weight {
    float kg;
    public:

    void getdata() {
        cout<<"Enter kilogram: ";
        cin>>kg;
    }

    float getkg() {
        return kg;
    }
};

class weightd {
    float gram;
    public:

    weightd() {
        
    }

    weightd(weight c) {
        float i = c.getkg();
        gram=i*1000;
    }

    void display() {
        cout<<"After conversion: "<<gram<<" gram"<<endl;
    }
    
}; 

int main() {
    weight ws;
    ws.getdata();
    weightd wd;
    wd=ws;
    wd.display();
}