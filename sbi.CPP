#include<iostream>
using namespace std;

class Bank
{
        int i,j;
        int depositeamount,totalwithdraw,totaldeposite,accbal;
        int totalnumoftransaction,totalnowithdraw;
        float totalamount,total;
        string name;
        static int bankcount;
        static int withdrawamount;
        static int depositeamount;
        public:

        void Information()
        {
          cout<<"Enter Bank Name :";
          cin>>name;
          cout<<"Enter people Number :";
          cin>>j;
        }
        void setBankdetail()
        {
                bankcount++;
        }
        void bankTransection()
        {
         for(i=0;i<j;i++)
         {
                cout<<"enter name :";
                 cin>>name;
                cout<<"withdraw amount :";
                cin>>withdrawamount;
                cout<<"Deposit amount :";
                cin>>depositeamount;
        }
    }
    void TotalAmount()
    {
        accbal=10000;
       bankcount = totalamount = accbal + depositeamount - withdrawamount ;
       bankcount = totalwithdraw = accbal - withdrawamount;
       bankcount = totaldeposite = accbal + depositeamount; 
       cout<<"\nTotal amount of withdraw :"<<totalwithdraw;
       cout<<"\nTotal amount of deposite :"<<totaldeposite;
       cout<<"\nTotal transaction Amount :"<<totalamount;
    }
};