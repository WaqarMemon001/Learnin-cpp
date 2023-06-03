/* Program that find factorial of number using While Loop */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int n,fact=1;
cout<<"Enter the value of n"<<"\n";
cin>>n;
while(n !=0)
{
	fact=fact*n;
	n=n-1;
}
cout<<"The factorial of number is "<<fact;
getch();
}
