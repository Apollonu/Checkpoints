/*  Project Name: Chapter 3 Exercise 6 - Ingredient Adjuster
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: October 10, 2024
    Requirements:
    The recipe produces 48 cookies with this amount of the ingredients.
    Write a program that asks the user how many cookies he or she wants to make,
    then displays the number of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int cookieRatio = 48;

// All in cups
double sugarRatio = 1.5 / cookieRatio;
double butterRatio = 1.0 / cookieRatio;
double flourRatio = 2.75 / cookieRatio;

int bakeCookies;
double sugar;
double butter;
double flour;

int main()
{
    cout << "How many cookies do you wish to make?\n";
    cout << setprecision(2) << fixed;
    cin >> bakeCookies;
    sugar = sugarRatio * bakeCookies;
    butter = butterRatio * bakeCookies;
    flour = flourRatio * bakeCookies;
    cout << "In order to make " << bakeCookies << " cookies, you will need:\n";
    cout << sugar << " cups of sugar.\n";
    cout << butter << " cups of butter.\n";
    cout << flour << " cups of flour.\n";
}