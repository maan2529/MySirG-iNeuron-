// Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
float swap ,a,b;
cout<<"Enter two number to swap "<<endl;
cin>>a>>b;
swap =a;
a=b;
b=swap;
cout<<" a is "<<a << " and" <<" b is "<<b;

 
getch();
return 0;
}