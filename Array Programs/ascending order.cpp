#include <conio.h>
#include<iostream>
using namespace std;
int main()
{
     int num[10], temp;

     for(int i=0; i<10; i++)
     {
	 cout<<"Enter number "<<i+1<<" : ";
	 cin>>num[i];
     }

     for(int i=0; i<9; i++)
     {
	   for(int j=i+1; j<10; j++)
	   {
	       if(num[i]>num[j])
            {
              temp=num[i];
              num[i]=num[j];
              num[j]=temp;
            }
	   }
     }
     
     for(int i=0; i<10; i++)
     cout<<num[i]<<endl;

     getch();
}

