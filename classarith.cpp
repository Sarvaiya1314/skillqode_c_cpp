#include<iostream>
using namespace std;
class arith
{
    int a,b; //  privet variable
    public:
    void setval(int x,int y)
    {
        a=x;
        b=y;
    }
    void getval()
    {
        cout<<"\n A:"<<a<<"\t B:"<<b;
    }
    void dosum()
    {
        cout<<"\n A * B :"<<a*b;

    }
};
int main()
{
    arith obj1;
    obj1.setval(13,14);
    obj1.getval();
    obj1.dosum();

}
