/*
Design a class to represent a bank account with data members name, account-number, account-type, and balance. Define functions to assign initial values, to deposit an amount, to withdraw an amount after checking balance, and to display the name and balance. 
*/

#include<iostream>
using namespace std;
class bank {
    public:
    
    string acc_t;
    char name[20];
    int acc_n, balance=5000;
    
    void getdata() {
        cout<<"Enter account holder name: "<<endl;
        cin>>name;
        cout<<"Enter account number: "<<endl;
        cin>>acc_n;
        cout<<"Enter account type: "<<endl;
        cin>>acc_t;
        cout<<"Your current balance is: "<<balance<<endl<<endl;
        deposite();
        withdraw();
        displaydata();
    }

    void deposite() {
        int bal;
        cout<<"Enter the amount to deposite: "<<endl;
        cin>>bal;
        balance=bal+balance;
        cout<<"Amount deposite successfully"<<endl;
        cout<<"Your new balance: "<<balance<<endl;
        cout<<endl;
    }

    void withdraw() {
        int withdraw;
        
        cout<<"Enter amount to withdraw: ";
        cin>>withdraw;

        if (withdraw > balance){
            cout<<"Insufficient balance"<<endl;
            exit(0);
        }
        balance=balance - withdraw;
        cout<<"Remaining Balance: "<<balance<<endl;
        cout<<endl;

    }

    void displaydata() {
        cout<<"Name of account holder: "<<name<<endl;;
        cout<<"Closing Balance: "<<balance<<endl;
    }
};

int main() {
    bank b;
    int i;
    b.getdata();
    return 0;
}