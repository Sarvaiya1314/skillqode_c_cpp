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

class Marks : public Student
{
    protected:
    int s1;
    int s2;
    int  s3;
    public:

    void getmarks();
    void putmarks();
};
class Grade //public Student
{
    protected:
     char grade[10];
    public:

    void showGrade();
};
class Result : public Marks,public Grade
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
/*void Grade ::showGrade()
{
    cout<<"Grade :"<<Grade;
}
*/
int main()
{
    Result x;
    x.read();
    x.display();
    x.getmarks();
    x.putmarks();


}