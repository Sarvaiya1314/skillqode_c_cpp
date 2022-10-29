#include<iostream>
#include<string.h>
using namespace std;

class Bank
{
    public:
    int totalnumoftransaction,nowithdraw,nodiposite,accbal,ag,c,n;
    float totalamount,total;
    string name,bn;
    int samount=5000,slimit,swithdraw,sdiposite,a;
    int camount=25000,climit,cwithdraw,cdiposite;
    static int bankcount;

    void Information();
    void choose();
    void totalWithdrawal();
    void totalDiposite();
   /* void cdiposite();
    void cwithdraw();
    void sdiposite();
    void swithdraw();
*/

};

void Bank::Information()
{

    cout<<"Enter Bank Name : ";
    cin>>bn;
    cout<<"\n Enter Your Name : ";
    cin>>name;
    cout<<"\n Enter Your Age : ";
    cin>>ag;

}
void Bank::choose()
{
    
    cout<<"\nchoose Account type \n 0 = Saving \n 1 = Current \n 2 = Both Account ";
    cin>>c;
        if(c==0)
        {
            
            cout<<"\n Your Account is Saving... ";
            cout<<"\n Saving Account Balance :"<<samount;
            cout<<"\n Deposite Ammount  : ";
            cin>>sdiposite;
            cout<<" Withdrawal Ammount : ";
            cin>>swithdraw;
        
            samount=samount+sdiposite;
            samount=samount-swithdraw;
            
            cout<<"\n After Tranjection  Ammount : "<<samount;
            

        }
        else if(c==1)
        {
            
            cout<<"\n Your Account is Current ...";
            cout<<"\n Current Account Balance :"<<camount;
            cout<<"\n Deposite Ammount : ";
            cin>>cdiposite;
            cout<<"\n Withdrawal Ammount : ";
            cin>>cwithdraw;

            camount=camount+cdiposite;
            camount=camount-cwithdraw;

            cout<<"\n After Tranjection  Ammount : "<<camount;


        }
        else 
        {
            cout<<"\n You Have Both Account...";
            cout<<"\n Select  Account type \n 0 = Saving \n 1 = Current ";
            cin>>n;

            if(n==0)
            {
                cout<<"\n Saving Account Balance :"<<samount;
                cout<<"\n Deposite Ammount  : ";
                cin>>sdiposite;
                cout<<"Attempt : ";
                cin>>slimit;

               
                cout<<" Withdrawal Ammount : ";
                cin>>swithdraw;
        
                samount=samount+sdiposite;
                samount=samount-swithdraw;
                
                total=samount+camount;
                cout<<"\n Total Ammount in Saving : "<<samount;
                cout<<"\n Total Ammout of Both Account  : "<<total;
            
            }
            else
            {
                
            cout<<"\n Current Account Balance :"<<camount;
            cout<<"\n Deposite Ammount : ";
            cin>>cdiposite;
            cout<<"\n Withdrawal Ammount : ";
            cin>>cwithdraw;

            camount=camount+cdiposite;
            camount=camount-cwithdraw;
            total=samount+camount;
            cout<<"\n Total Ammount in Current : "<<camount;
            cout<<"\n Total Ammount of Both Account : "<<total;
            }
        }
        cout<<"\n Would you like to transaction  again ?.\n1 = Yes \n2 = No";
        cin>>a;
         if(a==1)
        {
             cout<<"\n Enter Attempt No : ";
             cin>>slimit;

             if(slimit<=3)
             {
                cout<<"\n Your Account Balance : "<<samount;
                cout<<"\n Enter Withdrawal Ammount : ";
                cin>>swithdraw;
                samount=samount-swithdraw;
                cout<<"\n After Transection Account Balance : "<<samount;
             }
             else
             {
                cout<<"\n Sorry You can not More Transection on That Day .";
             }
        }
        else
        {
            cout<<"\n Have A Nice Day  ";
        }
}


int main()
{
    Bank x;
    x.Information();
    x.choose();
   // x.totalWithdrawal();

    
}