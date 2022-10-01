#include<iostream>
using namespace  std;
int main()
{
	int a,b,add,mul;

	cout<<"\n Enter two Value .";
	cin>>a;
	cin>>b;

	add=a+b;
	cout<<"\n Two number Addition is :"<<add;

	mul=a*b;
	cout<<"\n Two number multiplication is :"<<mul;



	if(mul%add==0)
	{
		cout<<"\n num is Divisiable by addition";
	}
	else
	{
		cout<<"\n num is not Divisiable by addition";
	}

}