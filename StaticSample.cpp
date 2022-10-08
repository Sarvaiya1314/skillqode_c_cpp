#include<iostream>
using namespace std;
class Bank
{
    public:
    static int stcount;
    void setcount(int n)
    {
        stcount = n;
    }
    void counter()
    {
        stcount++;
    }
    void getcount()
    {
        cout<<"\n"<<stcount;
    }

};
int Bank::stcount=0;
int main()
{
    Bank obj1,obj2,obj3;
    obj1.setcount(1000000);
    obj3.counter();
    // obj1.getcount();
    obj1.getcount();
    cout<<"\n Current Bank Balance : "<<Bank :: stcount;
    // cout<<"\n static : "<<stconut;
}