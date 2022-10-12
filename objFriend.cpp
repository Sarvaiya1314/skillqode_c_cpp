#include<iostream>
using namespace std;

class Loc
{
    int longitude,latitude;
    public:
    loc()
    {
        longitude=0;
        latitude=0;
    }
    loc (int lg,int lt)
    {
        longitude=lg;
        latitude=lt;

    }
    void show()
    {
        cout<<"\n longitude :"<<longitude<<"";
        cout<<"\n latitude :"<<latitude<<"\n";
    }
    friend  loc operator+(loc,loc)
};
loc operator+(loc op1,loc op2)
{
    loc temp;
    temp.longitude=op1.longitude+op2.longitude;
    temp.latitude=op1.latitude+op2.latitude;
}
int main()
{
    loc ob1(10,20),ob2(5,30),ob3;
    ob1.show();
    ob2.show();
    ob3=pb1+ob2;
    ob3.show();
    return 0;
}