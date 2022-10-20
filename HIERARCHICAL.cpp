#include<iostream> 
#include<string.h>                                                                             
using namespace std;

class Student
{
    public :
    int s1,s2,s3,t,rl;
    float p;
    char nm;
    char div[10];
    void getInfo();
    void putInfo();
   
};
class Mark : public Student
{
    public :
    void getMark();
    void putMark();
   
};
class Result : public Student,public Mark
{
    public :
    void  process();
    void  printResult(); 
};

void Student::getInfo()
{
    cout<<"Enter Roll NO : ";
    cin>>rl;
    cout<<"Enter Name : ";
    cin>>nm;
}
void Student::putInfo()
{
    cout<<"\n Your Name : "<<nm<<endl;
    cout<<"Your Roll No : "<<rl<<endl;
}
void Mark::getMark()
{
    cout<<"\nEnter 3 subject of mark : ",
    cin>>s1;
    cin>>s2;
    cin>>s3;
}
void Mark::putMark()
{
    cout<<"\nSubject 1 :"<<s1;
    cout<<"\nSubject 2 :"<<s2;
    cout<<"\nSubject 3 :"<<s3;
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
}
void Result::printResult()
{
    cout<<"Total : "<<t<<endl;
    cout<<"\n";
    cout<<"Percentage : "<<p<<endl;
    cout<<"Division : "<<div<<endl;
}   
int main()
{
    Student x;

    x.getInfo();
    x.putInfo();
    return 0; 
}  