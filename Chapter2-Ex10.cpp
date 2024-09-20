/*  Project Name: Chapter 2 Exercise 10 - Distance Per Tank of Gas
    File Name: Chapter2-Ex10-Harrison_Hudgins.cpp
    Programmer: Harrison Hudgins
    Date: September 20, 2024
    Requirements:
    A car holds 15 gallons of gasoline and can travel 375 miles before refueling.
    Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
*/

#include <iostream>
using namespace std;

int gallons = 15;
int miles = 375;
int MPG;

int main()
{
    cout << "A car holds " << gallons << " gallons.\n" << "It can travel " << miles << " miles.\n\n";
    MPG = miles / gallons;
    cout << "The car has " << MPG << " miles per gallon.\n";
}
