//Basic Proogramm
#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"\n A Constructor Calld ";

    }
    ~A()
    {
        cout<<"\n A Destructor calld ";

    }
};
class B:public A 
{
    public:
    B()
    {
        cout<<"\n B Constructor called";
    }
};
class C:public B
{
    public:
    C()
    {
        cout<<"\n C Constructor Calld";

    }
};
int main ()
{
    C c;

}
  