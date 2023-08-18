/*
Write a program to demonstrate the use of default arguments in functions.
*/

#include<iostream>
using namespace std;
void sub(int x,int y=4){
    int sub = x-y;
    cout<<"subtract is : "<<sub<<endl;
}

void sum(int x,int y=1,int z=2){
    int sum = x+y+z;
    cout<<"sum is : "<<sum<<endl;
}

int main(){
    sub(6);
    sum(7);
}