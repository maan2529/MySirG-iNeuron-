// Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[10], sum = 0;
    cout << "Enter ten numbers ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of numbers is " << sum;

    getch();
    return 0;
}