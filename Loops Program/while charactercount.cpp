/* Program that counts the characters in a phrase until Enter key is pressed */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int count=0;
cout<<"Enter the line of text:"<<"\n";
while(getche() != '\r')
count++;
cout<<"\n Character count="<<count;

getch();
}
