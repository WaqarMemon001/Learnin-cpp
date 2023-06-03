// Program using switch to perform Arithematic operations

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a,b;
char ch;
cout<<"enter 1st number:"<<"\n";
cin>>a;
cout<<"enter 2nd number:"<<"\n";
cin>>b;
cout<<"enter the operator:"<<"\n";
cin>>ch;
switch(ch)
{
	case '+':
		{
			cout<<"a+b="<<a+b<<"\n";
			break;
		}
case '-':
	{
		cout<<"a-b="<<a-b<<"\n";
		break;
	}
case '*':
	{
		cout<<"a*b="<<a*b<<"\n";
		break;
	}
case '/':
	{
		cout<<"a/b="<<a/b<<"\n";
		break;
}
default:
	cout<<"Enter the correct operator:"<<"\n";
}
getch();
}

