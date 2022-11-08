//run time polymorphism // function overriding
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "Base class is invoked" << endl;
    }
};
class Dervied : public Base
{
public:
    void display()
    {
        cout << "Derived Class is invoked" << endl;
    }
};
int main()
{
    // Dervied d;
    // d.display();
    Base *p, b;
    Dervied d;
    p = &b;       //BASE
    p->display(); ///-> point to
    p = &d;       //Derived
    p->display();
    // Base b;
    // b.display();
}