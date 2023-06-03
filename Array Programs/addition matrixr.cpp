#include <conio.h>
#include<iostream>
using namespace std;
int main()
{
	int arr1[3][4],arr2[3][4],result[3][4];
	cout<<"enter the elements of 1st array:"<<"\n";
	for(int i=0;i<3;i++)
	for(int j=0;j<4;j++)
	cin>>arr1[i][j];
	cout<<"enter the elements of 2nd array:"<<"\n";
	for(int k=0;k<3;k++)
	for(int l=0;l<4;l++)
	cin>>arr2[k][l];
	for(int m=0;m<3;m++)
	for(int n=0;n<4;n++)
	result[m][n]=arr1[m][n]+arr2[m][n];
	cout<<"Result after addition is:"<<"\n";
	for(int x=0;x<3;x++)
	{
		for(int y=0;y<4;y++)
		cout<<result[x][y]<<"\t";
		cout<<"\n";
	}
getch();
}


