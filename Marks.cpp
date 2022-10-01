#include<iostream>
using namespace std;

int main()
{
    int maths,phy,chem,total;
    float per;
    cout<<"Maths Marks :";
    cin>>maths;
    cout<<"Marks Physics :";
    cin>>phy;
    cout<<"Marks Chemistry :";
    cin>>chem;
    total=maths+phy+chem;
    per=total/3;
    cout<<"\n total:"<<total;
    cout<<"\n per :"<<per;

}