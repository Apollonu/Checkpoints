/*  Project Name: Chapter 2 Exercise 18 - Energy Drinks
    File Name: Chapter2-Ex18.cpp
    Programmer: Harrison Hudgins
    Date: September 25, 2024
    Requirements:
    Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so 
    that the user can enter the number of the number of customers that were surveyed 
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the amount of customers that bought energy drinks.\n";
    double customers;
    cin >> customers;
    double returningCustomers = 0.15;
    double citrusCustomers = 0.58;
    double customerPercentage = customers * returningCustomers;
    cout << customerPercentage << " customers buy one or more energy drink per week.\n";
    customerPercentage = customers * citrusCustomers;
    cout << customerPercentage << " customers prefer citrus drinks.\n";
}