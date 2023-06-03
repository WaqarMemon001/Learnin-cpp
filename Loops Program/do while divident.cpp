/* Program that invites the user to enter 2 number; a dividend and divisor and then find Quotient and remainder using do While Loop */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

long dividend,divisor;
char ch;
do
{
	cout<<"enter the dividend:"<<"\n";
	cin>>dividend;
	cout<<"enter the divisor:"<<"\n";
	cin>>divisor;
	cout<<"the Quotient is:"<<dividend/divisor<<"\n";
	cout<<"the remainder is:"<<dividend%divisor<<"\n";
	cout<<"\n Do you want to continue? (y/n):"<<"\n";
	cin>>ch;
}
while(ch != 'n');
getch();

}
