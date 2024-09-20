/*  Project Name: Chapter 2 Exercise 10 - Distance Per Tank of Gas
    File Name: Chapter2-Ex10-Harrison_Hudgins.cpp
    Programmer: Harrison Hudgins
    Date: September 20, 2024
    Requirements:
    Create a second branch that revises your code so that the user can enter the number of gallons and the miles driven.
*/

#include <iostream>
using namespace std;

int gallons;
int miles;
int MPG;

int main()
{
    cout << "Enter the amount of gallons a car has.\n";
    cin >> gallons;
    cout << "Enter the amount of miles the car can travel before refueling.\n";
    cin >> miles;
    cout << "\nThe car holds " << gallons << " gallons.\n" << "It can travel " << miles << " miles.\n\n";
    MPG = miles / gallons;
    cout << "The car has " << MPG << " miles per gallon.\n";
}
