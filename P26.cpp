/*
Create a function called swaps( ) that interchanges the values of the two arguments sent to it (pass these arguments by reference). Make the function into a template, so it can be used with all numerical data types (char, int, float and so on). Write a main( ) program to exercise the function with several types.
*/

#include<iostream>
using namespace std;

template <class S>
S swapvalue(S &x,S &y) {
    S temp;
    temp=x;
    x=y;
    y=temp;
};

int main() {
    int a1=5,a2=8;
    float b1=2.4,b2=9.3;
    char c1='H',c2='S';

    swapvalue(a1,a2);
    swapvalue(b1,b2);
    swapvalue(c1,c2);

    cout<<"After swapping  values: "<<endl;
    cout<<"a1="<<a1<<", "<<"a2="<<a2<<endl;
    cout<<"b1="<<b1<<", "<<"b2="<<b2<<endl;
    cout<<"c1="<<c1<<", "<<"c2="<<c2<<endl;
    return 0;
}