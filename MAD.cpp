#include<iostream>
using namespace std;
int main()
{
	int a,b,mul;

	cout<<"\n Enter two Value .";
	cin>>a>>b;
	

	mul=a*b;
	cout<<"\n Two number multiplication is :"<<mul;

	if(mul%7==0)
	{
		cout<<mul<<"\n is divisiable by 7";
	}
	else
	{
		cout<<mul<<"\n is not divisiable by 7";
	}

	if(mul%3==0)
	{
		cout<<mul<<"\n is Divisiable by 3";
	}
	else
	{
		cout<<mul<<"\n is not Divisiable by 3";
	}
    return 0;

}