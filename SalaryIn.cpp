#include<iostream>
using namespace std;

class Salary
{
	int salary;
    string name;
    public:
    float hra,da,z;

    void information()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"\n Enter Basic Salary : ";
        cin>>salary; 
    }
	
    void Cal()
    {
        if(salary<=5000)
		{
			hra=salary*.08;
			da=salary*.2;
			cout<<"\n har : "<<hra<<" \n da %f : "<<da;
			
		}
		else if(salary>=5000 && salary<=10000)
		{
			hra=salary*.12;
			da=salary*.3;
			cout<<"\n har : "<<hra <<"\n da : "<<da;	
		}else if(salary>=10000 && salary<=15000)
		{
			hra=salary*.15;
			da=salary*.4;
			cout<<"\n har : "<<hra<<" \n da : "<<da;
		}
        z=salary+hra+da;
		cout<<"\n total salary : "<<z;
    }
};

int main()
{
    Salary obj;
    obj.information();
    obj.Cal();

    return 0;
}
	
		