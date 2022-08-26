// Write a C++ program to find the maximum of two numbers.
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two number A and B " << endl;
    cin>>a>>b;
    if (a > b)
        cout << " A is greater  ";
    else
        cout << " B is greater ";

    getch();
    return 0;
}