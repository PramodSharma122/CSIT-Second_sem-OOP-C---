/*
Write a program to find the cube of given integer using inline function.
*/

#include<iostream>
using namespace std;
inline int cube(int x)
{
    return x*x*x;

}

int main(){
    int a=3;
    cout<<"The cube is: "<<cube(a)<<endl;
}