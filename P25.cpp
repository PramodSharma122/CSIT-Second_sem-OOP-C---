/*
Write a program that defines a function template to return a maximum of two integers, floats or characters. 
*/

#include<iostream>
using namespace std;
template <class comp>

comp maximum (comp a,comp b) {
    comp maximum = (a>b)?a:b;
    return maximum;    
}

int main() {
    int a1=3,a2=6;
    float b1=3.2,b2=1.3;
    char c1='p',c2='a';
    
    cout<<"Maximum integer value: "<<maximum(a1,a2)<<endl;

    cout<<"Maximum floating point value: "<<maximum(b1,b2)<<endl;

    cout<<"Maximum character based on ASCII value: "<<maximum(c1,c2)<<endl;
}