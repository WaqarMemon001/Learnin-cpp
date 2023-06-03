#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
     char day[7][11]={ "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; 
    
     for(int i=0; i<7; i++)
     cout<<"Day "<<i+1<<" : "<<day[i]<<endl;     
 
     getch();
} 

