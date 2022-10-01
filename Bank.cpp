#include<iostream>
using namespace std;
class Bank
{
    int accBalance,withdrawal,Deposite,total;
    public:
    void showAccountBalance()
    {
        accBalance=10000;
        cout<<"\n AccountBalance :"<<accBalance;
    }
     void withdrawalAmmount()
     {
        cout<<"\n Withdrawal Ammount :";
        cin>>withdrawal;

        accBalance=accBalance-withdrawal;
        cout<<"\n  After Withdrawal Balance :"<<accBalance;
     }
     void dipositeAmmount()
     {
        cout<<"\n Diposite Ammount :";
        cin>>Deposite;

        total=accBalance+Deposite;
        cout<<"\n Current Account Balance :"<<total;        
    }
};
int main()
{
    Bank Person;
    Person.showAccountBalance(); 
    Person.withdrawalAmmount();
    Person.dipositeAmmount();
   
}