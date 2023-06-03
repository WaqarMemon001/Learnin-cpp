// Program to generate Prime Number series b/w 1 to 100 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int c=0;
	for(int a=1;a<=100;a++)
	{
		for(int b=2;b<a;b++)
		if(a%b==0)
		{
		c++;
		}
		if(c==0)
		cout<<a<<"\n";
		c=0;
	}
getch();
}

