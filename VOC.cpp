#include<iostream>
using namespace std;
int main()
{
	char ch,A,E,I,O,U,a,e,i,o,u;
	
	cout<<"\n Enter One Character : \n";
	cin>>ch;

	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		cout<<"\n" <<ch<< " Character is vower. ";
	}
	else
	{
		cout<<"\n"<<ch<< " Character is Consonents.";
	}
	
}