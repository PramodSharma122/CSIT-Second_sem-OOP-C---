/*
Write a program that increases an integer value by 1 by overloading the operator. 
*/

#include<iostream>
using namespace std;
class increases{
    public:

    int num;
    increases(int n = 0) : num(n){}

    increases operator++(){
        num = ++num;
        return num;
    }

    void displayvalue(){
        cout<<"Increase Value is: "<<num<<endl;
    }
};

int main(){
    increases i1(6);
    i1.operator++();
    i1.displayvalue();
    return 0;
}