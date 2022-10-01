#include<iostream>
using namespace std;
class Bank
{
    //int accBalance,withdrawal,Deposite,total;
    public:
    void showAccountBalance(int);
    void withdrawalAmmount(int,int);
    void dipositeAmmount(int,int,int);
    
};
    void Bank :: showAccountBalance(int accBalance)
    {
        accBalance=10000;
        cout<<"\n AccountBalance :"<<accBalance;
    }
     void Bank :: withdrawalAmmount(int accBalance,int withdrawal)
     {
        cout<<"\n Withdrawal Ammount :";
        cin>>withdrawal;

        accBalance=accBalance-withdrawal;
        cout<<"\n  After Withdrawal Balance :"<<accBalance;
     }
     void Bank ::dipositeAmmount(int Deposite,int total,int accBalance)
     {
        cout<<"\n Diposite Ammount :";
        cin>>Deposite;

        total=accBalance+Deposite;
        cout<<"\n Current Account Balance :"<<total;        
    }
int main()
{
    Bank Person;
    Person.showAccountBalance(10000); 
    Person.withdrawalAmmount(10000,250);
    Person.dipositeAmmount(150,750,10000);
   
}