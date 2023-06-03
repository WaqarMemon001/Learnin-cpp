// Program that will print whether the number is prime or not

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
long n,j;
char isprime='T';
cout<<"enter any number:"<<"\n";
cin>>n;
for(j=2;j<=n/2;j++)
{
	if(n%j==0)
	isprime='F';
}
if(isprime=='T')
cout<<n<<"is prime number"<<"\n";
else
cout<<n<<"is not a prime number"<<"\n";

getch();
}

