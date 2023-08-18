/*
A company makes both books and CD-ROM versions of its multimedia works. Create a class called Publication which stores the title and price of publications. From this class, derive two classes: Book and CD-ROM. The class Book adds a page count and the CD-ROM adds a playing time in minutes. Each of these classes should have some member functions to get the data from the keyboard and display the data. Write a main routine to create objects and store the data. The main routine also displays the data. 
*/

#include<iostream>
using namespace std;
class Publication{
    public:
    int price;
    string title;

    void getdata(){
        cout<<"Enter the price: "<<endl;
        cin>>price;
        cout<<"Enter title name: "<<endl;
        cin>>title;
    }

    
};

class Book:public Publication{
    public:
    int count;

    void getdata(){
        Publication::getdata();
        cout<<"Enter the page count: "<<endl;
        cin>>count;
    }
    void display(){
        cout<<"PRICE: "<<price<<endl;
        cout<<"TITLE: "<<title<<endl;
        cout<<"PAGE COUNT: "<<count<<endl;
    }
};

class CD_ROM:public Publication{
    public:
    int time;

    void getdata1(){
        Publication::getdata();
        cout<<"Enter playing time in minutes: "<<endl;
        cin>>time;
    }

    void display1(){
        cout<<"PRICE: "<<price<<endl;
        cout<<"TITLE: "<<title<<endl;
        cout<<"TIME: "<<time<<" min"<<endl;
    }

};

int main(){
    Book B;
    CD_ROM c;

    B.getdata();
    cout<<endl;
    B.display();
cout<<endl;
    c.getdata1();
    cout<<endl;
    c.display1();

}