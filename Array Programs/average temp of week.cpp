#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
float temp[7];
float sum=0.0;
for(int day=1;day<=7;day++)
{
	cout<<"Enter the temperature for :"<<day<<"\t";
	cin>>temp[day];
	sum+=temp[day];
}
//clrscr();
cout<<"the average temperature of a week is :"<<sum/7;
getch();
}

