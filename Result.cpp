#include<iostream>
using namespace std;

class Student
{
    int adnm[2],i;
    string sname[2];
    float total[2],eng[2],math[2],sci[2],Guj[2],SS[2],Avgmarks[2];
    public:
    void ReadInfo();
    void GETAVG();
    void DisplyInfo();

};
    void Student::ReadInfo()
    {
        for(i=0; i<2; i++)
        {
        cout<<"Enter Your Addmission Number  :- ";
        cin>>adnm[i];
        cout<<"Enter Your Name :- ";
        cin>>sname[i];
        cout<<"Enter English Marks :- ";
        cin>>eng[i];
        cout<<"Enter Maths   Marks :- ";
        cin>>math[i];
        cout<<"Enter Science Marks :- ";
        cin>>sci[i]; 
        cout<<"Enter Gujrati Marks :- ";
        cin>>Guj[i]; 
        cout<<"Enter Social Science Marks :- ";
        cin>>SS[i]; 
        }
    }
    void Student:: GETAVG()
    {
        for(i=0; i<2; i++)
        {
            total[i]=eng[i]+math[i]+sci[i]+Guj[i]+SS[i];
            Avgmarks[i]=total[i]/5;
        }
    }
    void Student::DisplyInfo()
    {
        
        cout<<"\n AddNo\tName\tEglish\tMaths\tScience\tGujrati\tS.S\tTotal\tAvg Mark";
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        for(i=0; i<2; i++)
        {
        cout<<"\n"<< adnm[i]<<"\t"<<sname[i]<<"\t"<<eng[i]<<"\t"<<math[i]<<"\t"<<sci[i]<<"\t"<<Guj[i]<<"\t"<<SS[i]<<"\t"<<total[i]<<"\t"<<Avgmarks[i];
        }
    }

int main()
{
    Student Result;
    Result.ReadInfo();
    Result.GETAVG();
    Result.DisplyInfo();
}