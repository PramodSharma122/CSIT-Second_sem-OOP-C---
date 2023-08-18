/*
Write a program to compute subtraction of two complex numbers using operator overloading. 
*/

#include<iostream>
using namespace std;
class subtract {
    public:
    int real,imag;

    subtract(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    void get_complex_nums(){
        cout<<"Enter the real number: ";
        cin>>real;
        cout<<"Enter the imaginary number: ";
        cin>>imag;
    }

    subtract operator-(subtract o) {
        subtract temp;
        temp.real = real - o.real;
        temp.imag = imag - o.imag;
        return temp;
    }

    void display_complex_nums() {
        cout<<"Subtraction is: "<<real<<" - "<<imag<<"i"<<endl;
    }
};
int main(){
    subtract s1,s2,s3;
    s1.get_complex_nums();
    s2.get_complex_nums();
    s3 = s1 - s2;
    s3.display_complex_nums();
}