/*
Write a program to overload the unary minus operator using the friend function. 
*/

#include<iostream>
using namespace std;
class overload{
    public:
    int num;
    overload(int n = 0){
        num = n;
    }

    void getnums(){
        cout<<"Enter the number: ";
        cin>>num;
    }

    friend overload operator- (overload &n);
    
    void display(){
        cout<<"num is: "<<num<<endl;
    }
};

overload operator-(overload &n){
    n.num = -n.num;
    return n;
}

int main(){
    overload o1,o2;
    o1.getnums();
    o1.display();
    o2.display();
    o2 = -o1;
    o1.display();
    o2.display();
    return 0;
}