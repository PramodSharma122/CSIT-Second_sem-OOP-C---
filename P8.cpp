/*
Create a class Account with data members acc no, balance, and min_balance(static). 
• Include methods for reading and displaying values of objects 
• Define static member function to display min_balance 
• Create array of objects to store data of 5 accounts and read and display values of each object.
*/

#include<iostream>
using namespace std;
class Account {
    int acc_no, balance;
    static int min_balance;
    public:

    void getdata() {
        cout<<"Enter your Account No.: ";
        cin>>acc_no;
        cout<<"Enter balance: ";
        cin>>balance;
    }

    void displaydata() {
        cout<<"Account no.: "<<acc_no<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

    static int display_min_balance() {
        cout<<"Minimum Balance: "<<min_balance<<endl;
        return 0;
    }
};
int Account::min_balance=1000;


int main() {

    int i;
    Account::display_min_balance();
    Account a[5];

    for(i=0;i<5;i++) {
        a[i].getdata();
        cout<<endl;
    }
    cout<<endl;
    cout<<"OUTPUT:"<<endl;
    for(i=0;i<5;i++) {
        a[i].displaydata();
        cout<<endl;
    }

    return 0;
}