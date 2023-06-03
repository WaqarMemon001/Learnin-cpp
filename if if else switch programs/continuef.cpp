// Program to demostrate Continue statement
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long dividend,divisor;
	char ch;
	do
	{
		cout<<"Enter the dividend:"<<"\n";
		cin>>dividend;
		cout<<"Enter the divisor:"<<"\n";
		cin>>divisor;
		if(divisor==0)
		{
			cout<<"Illegal divisor"<<"\n";
			continue;
			
		}
	cout<<"Quotient is:"<<dividend/divisor<<"\n";
	cout<<"Remainder is:"<<dividend%divisor<<"\n";
	cout<<"Do you want to continue?(Y/N):"<<"\n";
	cin>>ch;
	}
	while((ch !='N')&&(ch !='n'));
getch();
}


