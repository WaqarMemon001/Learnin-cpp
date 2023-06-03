#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10];
	cout<<"Enter the values in an array:"<<"\n";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		
	}
int min=arr[0];
for(int j=1; j<10;j++)
{
	if(arr[j]<min)
	min=arr[j];
}
cout<<"tha minimum value is:"<<min<<"\n";
getch();
}


