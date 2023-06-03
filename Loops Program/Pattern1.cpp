/* program for following series
12345
1234
123
12
1 */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int outer, inner;
	for(outer=5;outer>=1;outer--)
	{
		for(inner=1;inner<=outer;inner++)
		{
			cout<<inner;
		}
	cout<<"\n";
	}
	getch();
}
