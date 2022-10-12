//Friend key word
#include<iostream>
using namespace std;  

class Box
{
    private :
    int length;
    public:
    Box():length(0)
    {

    }
    friend int printlength(Box);
};

int printlength(Box b)
{
    b.length /=10;
    return b.length;
}
int main()
{
    Box b;
    cout<<"Lenghth of Box :"<<printlength<<endl;
    return 0;
}