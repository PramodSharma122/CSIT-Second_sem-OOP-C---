/*
Write a program to show an element of function overloading
*/

#include<iostream>
using namespace std;
class oop{
    public:
    void sum(int w,int x=1){
        int sum=w+x;
        cout<<"sum is : "<<sum<<endl;
    }

    void sum1(int w,int x=2,int y=3){
        int sum=w+x+y;
        cout<<"sum is: "<<sum<<endl;
    }
    
    void sum2(int w,int x=4,int y=1,int z=3){
        int sum=w+x+y+z;
        cout<<"sum is : "<<sum<<endl;
    }
};

int main(){
    oop o;
    o.sum(2,4);
    o.sum1(3,6);
    o.sum2(7,1,4);
}