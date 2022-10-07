//2
#include<iostream>
using namespace std;
class batsman
{
    int bcode;
    string bname;
    int innings,notout,runs;
    float batavg;
    public:
    void readdata();
    void calcavg();
    void displaydata();
};
    void batsman::readdata()
    {
        cout<<"\n enter bcode :-";
        cin>>bcode;
        cout<<"\n name of batsman :-";
        cin>>bname;
        cout<<"\n number of innings :-";
        cin>>innings;
        cout<<"\n batsman remain :- ";
        cin>>notout;
        cout<<"\n runs :- "; 
        cin>>runs; 
    }
   void batsman::calcavg()
    {
        batavg=runs/(innings-notout);
    }
    void batsman::displaydata()
    {
        cout<<"\n bcode :-"<<bcode;
        cout<<"\n name of batsman :-"<<bname;
        cout<<"\n number of innings :-"<<innings;
        cout<<"\n batsman remain :- "<<notout;
        cout<<"\n runs :- "<<runs;
        cout<<"\n batavg :-"<<batavg;
    }
int main()
{
    batsman bman;
    bman.readdata();
    bman.calcavg();
    bman.displaydata();
}