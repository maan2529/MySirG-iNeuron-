// Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
float a,b,c;
float Avg;
cout<<"Enter three number "<<endl;
cin>>a>>b>>c;
Avg=(a+b+c)/3;
cout<<"Average of three number is "<<Avg;
 
getch();
return 0;
}