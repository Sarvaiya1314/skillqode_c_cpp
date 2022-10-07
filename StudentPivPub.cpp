#include<iostream>
using namespace std;

class Student
{
    int adnm;
    string sname;
    float total,eng,math,sci;
    public:
    void Takedata();
    void cTotal();
    void showResult();

};
    void Student::Takedata()
    {
        cout<<"Enter Your Addmission Number  :- ";
        cin>>adnm;
        cout<<"Enter Your Name :- ";
        cin>>sname;
        cout<<"Enter English Marks :- ";
        cin>>eng;
        cout<<"Enter Maths   Marks :- ";
        cin>>math;
        cout<<"Enter Science Marks :- ";
        cin>>sci; 
    }
    void Student:: cTotal()
    {
        total=eng+math+sci;
    }
    void Student::showResult()
    {
        cout<<"\n AddNo\tName\tEglish\tMaths\tScience\tTotal";
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n"<< adnm<<"\t"<<sname<<"\t"<<eng<<"\t"<<math<<"\t"<<sci<<"\t"<<total;
    }

int main()
{
    Student object;
    object.Takedata();
    object.cTotal();
    object.showResult();
}