#include<iostream>
using namespace std;
int main()
{
	char ch,chang;
	
	cout<<"\n Enter one Character .: \n  ";
	cin>>ch;

	if(ch>=65 && ch<=90)
	{
	  chang=ch+32;
	  cout<<"\n character is : "<<chang;
	}
	else
	{
	 chang=ch-32;
	 cout<<"\n Character is : "<<chang;
	}
	

}