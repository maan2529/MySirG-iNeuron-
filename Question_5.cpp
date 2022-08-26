// Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
float l,b,h,volume;
cout<<"Enter length breadth and heigth of volume "<<endl;
cin>>l>>b>>h;
volume=l*b*h;
cout<<"Volume of cubide is "<<volume;

getch();
return 0;
}