#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int sum=0;
	int a[5];
	for(int i=1;i<=5;i++)
	{
		cout<<"Enter Element"<<i<<"\t";
		cin>>a[i];
		sum+=a[i];}
	
cout<<"The elements are traversed as"<<"\n";
for(int i=1;i<=5;i++)
{
cout<<a[i]<<"\n";
cout<<"sum of elements in array is:"<<sum<<"\n";
}
getche();

}

