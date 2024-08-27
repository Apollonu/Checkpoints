/*  Program File Name: Checkpoint2.14 
    Programmer: Harrison Hudgins
    Date: August, 2024
    Requirements:
    Write a program that has the following character variables:
    first, middle, and last. Store your initials in these variables
    then display them on the screen
*/


#include <iostream>
using namespace std;

int main()
{
    char FirstInitial;
    char MiddleInitial;
    char LastInitial;
    cout << "Please enter the initial of your first name:";
    cin >> FirstInitial;
    cout << "Please enter the initial of your middle name:";
    cin >> MiddleInitial;
    cout << "Please enter the initial of your last name:";
    cin >> LastInitial;
    cout << "Your initials are: " << FirstInitial << MiddleInitial << LastInitial;
}