// Element		Value 		Pattern
//   0				1			*
//	1				2			**
//  2				3			***// 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"Elements"<<"\t"<<"\t"<<"Value"<<"\t"<<"\t"<<"Pattern"<<"\n";
	
for(int j=0; j<10;j++)
{
	cout<<j<<"\t"<<"\t"<<arr[j]<<"\t"<<"\t";
	{
		for(int k=0;k<arr[j];k++)
		cout<<"*";
	}
	cout<<"\n";
}
getch();
}


