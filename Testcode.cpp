//3
#include<iostream>
using namespace std;
class test
{
    int testcode;
    string description;
    int nocandidate,centerread;
    public:
    void schedule();
    void calcntr();
    void disptest();
};
    void test::schedule()
    {
        cout<<"\n enter testcode:-";
        cin>>testcode;
        cout<<"\n description :-";
        cin>>description;
        cout<<"\n number of candidate :-";
        cin>>nocandidate;
        calcntr();
    }
   void test::calcntr()
    {
       centerread = nocandidate/100+1;
    }
    void test::disptest()
    {
        cout<<"\n testcode :-"<<testcode;
        cout<<"\n description :-"<<description;
        cout<<"\n number of candidate  :-"<<nocandidate;
        cout<<"\n number of center : "<<centerread;
    }
int main()
{
    test foruserview;
    foruserview.schedule();
    foruserview.disptest();
}
