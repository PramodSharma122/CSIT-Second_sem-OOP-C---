/*
Write a program to creat a class called Room in which data items are length,breadth and height. Create an array of object in the room. And finds its area and volume.
*/

#include<iostream>
using namespace std;
class Room{
    public:
    int length,breadth,height;
    void getdata(){
        cout<<"Enter Length: ";
        cin>>length;
        cout<<"Enter Breadth: ";
        cin>>breadth;
        cout<<"Enter Heigth: ";
        cin>>height;
    }

    void displayArea(){
        int A;
        A=length*breadth;
        cout<<"Area is : "<<A<<endl;
    }

    void displayVolume(){
        int V;
        V=length*breadth*height;
        cout<<"Volume is: "<<V<<endl;
    }
};

int main(){
    int i;

    Room r[3];
    for(i=0;i<3;i++){
        r[i].getdata();
        r[i].displayArea();
        r[i].displayVolume();
        cout<<endl;
    }
}