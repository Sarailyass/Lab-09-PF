#include<iostream>
using namespace std;
int main()
{ 
    int balance;
    int amount;
    cout<< "Bank Statment;"<<endl;
    cout<<"1. Deposite Money"<<endl;
    cout<< "2. Withdraw money"<<endl;
    cout<<"3. Check Balance"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin>> choice;
    switch(choice) {
    case 1;
    cout<<"Enter amount to deposite:"<<endl
    cin>>amount;
    break;
     case 2;
    cout<<"Enter amount to withdraw:"<<endl
    cin>>amount;
    break;
     case 3;
    cout<<"Check Balance:"<<endl
    cin>>balance;
    break;
     case 4;
    cout<<"exit:"<<endl
    cin>>exit;
    break;
    default:
    cout<<"Invalid";
    break;

    }
    return 0;
}