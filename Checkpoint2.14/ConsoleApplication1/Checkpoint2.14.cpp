/*  Program File Name: Checkpoint2.14 
    Programmer: Harrison Hudgins
    Date: August, 2024
    Requirements:
    Write a program that has the following character variables:
    first, middle, and last. Store your initials in these variables
    then display them on the screen
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    char FirstInitial;
    char MiddleInitial;
    char LastInitial;
    string FirstName;
    cout << "Please enter the initial of your first name: ";
    cin >> FirstInitial;
    cout << "Please enter the initial of your middle name: ";
    cin >> MiddleInitial;
    cout << "Please enter the initial of your last name: ";
    cin >> LastInitial;
    cout << "Your initials are: " << FirstInitial << MiddleInitial << LastInitial;
    cout << "\nPlease enter your first name: ";
    cin >> FirstName;
    cout << "Your first name is: " << FirstName;
}