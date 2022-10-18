//Multiple inheritance with Student Example 
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int rl;
    char nm[20];
    public:

    void read();
    void display();

};

class Marks 
{
    protected:
    int s1;
    int s2;
    int  s3;
    public:

    void getmarks();
    void putmarks();
};

class Result :public Student,public Marks
{
    int t;
    float p;
    char div[10];
    public:
    void process();
    void printresult();

};
void Student::read()
{
    cout<<"Enter Roll No : ";
    cin>>rl;
    cout<<"Enter Name : ";
    cin>>nm;
}
void Student::display()
{
    cout<<"\n Roll No : "<<rl<<endl;
    cout<<"Name : "<<nm<<endl;
    cout<<"\n";
}
void Marks::getmarks()
{
    cout<<"Enter Marks for 3 Subject : "<<endl;
    cin>>s1;
    cin>>s2;
    cin>>s3;
}
void Marks ::putmarks()
{
    cout<<"Subject 1 : "<<s1<<endl;
    cout<<"Subject 2 : "<<s2<<endl;
    cout<<"Subject 3 : "<<s3<<endl;

}
void Result::process()
{
    t=s1+s2+s3;
    p=t/3.0;

    if(p>=60)
    {
        strcpy(div,"First");
    }
    else if(p>=50)
    {
        strcpy(div,"Second");
    }
    else
    {
        strcpy(div,"Third");
    }
    //p>=60? strcpy(div,"First"): p>=50? strcpy(div,"Second"): strcpy(div,"Third");
}
void Result:: printresult()
{
    cout<<"Total : "<<t<<endl;
    cout<<"\n";
    cout<<"Percentage : "<<p<<endl;
    cout<<"Division : "<<div<<endl;
}

int main()
{
    Result x;

    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();
    return 0;   
}