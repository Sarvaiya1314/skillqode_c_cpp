#include<iostream>
using namespace std;

int main()
{
    string bn,name;
    int  actp,samount=5000;

    cout<<"Enter Bank Name : ";
    cin>>bn;
    cout<<"\n Enter Your Name : ";
    cin>>name;
    cout<<"\n Saving : 1 \n Current : 2 \n Both :3 ";
    cout<<"\n Choose Account type : ";
    cin>>actp;

    switch (actp)
    {
    case 1:
        cout<<"\n You have Saving Account ... : "<<samount;
    

        break;
    
    default:
        cout<<"you have both Account : ";
        break;
    }
}