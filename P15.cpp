/*
Write a program to add two complex numbers using friend function. 
*/

#include<iostream>
using namespace std;
class complex{

    public:
    int real,imag;

    void getdata(){
        cout<<"Enter the real number: ";
        cin>>real;
        cout<<"Enter the imaginary number: ";
        cin>>imag;
    }

    friend complex adding(complex,complex);
       
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

complex adding(complex a,complex b){
    complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}

int main(){
    
    complex c1,c2,c3;
    cout<<"===============Input==============="<<endl;
    c1.getdata();
    c2.getdata();
    c3 = adding(c1,c2);
    cout<<"===============Output==============="<<endl;
    c3.display();
}