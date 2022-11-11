#include<iostream>
#include<stdlib.h>
using namespace  std;

class Bank
{
    int bal;
    public:

    static int total_deposite_amt,total_withdrawa_amt,total_trans;

    Bank(int bal)
    {
        total_deposite_amt+=bal;
        this->bal=bal;
    }

    int showbalance(int deposite)
    {
        return bal;
    }

    int deposite()
    {
        total_deposite_amt+=deposite;
        total_trans++;
        bal = bal+deposite;
        return bal;
    }

    int withdraw(int withdraw)
    {
        if(bal>withdraw)
        {
            total_trans++;
            total_withdrawa_amt+=withdraw;
            bal = bal - withdraw;
            return bal;
        }
        else
        {
            cout<<"\n Check Your Balance !!!! ";
            return 1;
        }
    }
};

int Bank::total_deposite_amt=0;
int Bank::total_withdrawa_amt=0;
int Bank::total_trans=0;


int main()
{
    system("CLS");
    int ch, dp=0,wt;

    Bank a(100),b(200);
    a.deposite(50);
    b.deposite(50);
    b.withdraw(50);

    cout<<"\n Total deposite amt : "<<Bank::total_deposite_amt; 
    cout<<"\n Total withdraw amt : "<<Bank::total_withdrawa_amt;
    cout<<"\n Total No Of Transaction : "<<Bank::total_trans;


    cout<<"\n Balance A : "<<a.showbalance();
    cout<<"\n Balance B : "<<b.showbalance();
    
}

