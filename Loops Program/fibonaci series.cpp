//Fibonacci Series (0, 1, 1, 2, 3, 5, 8, 13, 21)

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int n,onum,nnum,temp;
	cout<<"Enter the number of terms to generate series"<<"\n";
	cin>>n;
	onum=0;
	nnum=1;
	cout<<setw(4)<<onum<<setw(4)<<nnum;
	for(int j=1;j<=n-2;j++)
	{
		temp=nnum+onum;
		onum=nnum;
		nnum=temp;
		cout<<setw(4)<<nnum;
	}
getch();
}


