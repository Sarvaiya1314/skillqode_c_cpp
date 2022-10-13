#include<iostream>
using namespace std;

class Loc
{
    int longitude,latitude;
    public:
    Loc()
    {
        longitude=0;
        latitude=0;
    }
    Loc (int lg,int lt)
    {
        longitude=lg;
        latitude=lt;

    }
    void show()
    {
        cout<<"\n longitude :"<<longitude<<"";
        cout<<"\n latitude :"<<latitude<<"\n";
    }
    friend  Loc operator*(Loc,Loc);
    
};
Loc operator*(Loc ob1,Loc ob2)
{
    Loc temp;
    temp.longitude=ob1.longitude*ob2.longitude;
    temp.latitude=ob1.latitude*ob2.latitude;
}
int main()
{
    Loc ob1(10,20),ob2(5,30),ob3;
    ob1.show();
    ob2.show();
    ob3=ob1*ob2;
    ob3.show();
    return 0;
}