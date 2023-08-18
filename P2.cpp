/*
Write a program to find the square root of a given integer using an inline function
*/

#include<iostream>
using namespace std;
#include<cmath>
inline int squareroot(int x)

{
    return sqrt(x);
}

int main(){
    int a=64;
    cout<<"Squareroot is : "<<sqrt(a)<<endl;
}