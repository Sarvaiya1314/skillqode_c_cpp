#include<iostream>
using namespace std;
template < class T1,class T2 >
class A
{
    T1 a;
    T2 b;
    public:
    A(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
void display()
{
    cout<<"Displaying Template :"<<a<<","<<b<<'\n';
}
};


int main()
{
  
    A<int,float> d(200,23.34);
    d.display();
    return 0;
} 