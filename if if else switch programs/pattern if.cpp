/* Program to generate following pattern
1 2 3 4    10
5 6 7 8    26
9 10 11 12 42
13 14 15 16 58  */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sum=0;
	for(int i=1;i<=16;i++)
	{
		cout<<i<<"\t";
		sum+=i;
		if(i%4==0)
		{
			cout<<sum<<"\n";
			sum=0;
		}
}
getch();
}

