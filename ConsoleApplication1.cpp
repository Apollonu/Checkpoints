/*  Project Name: Chapter 2 Exercise 18 - Energy Drinks
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: September 25, 2024
    Requirements:
    A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week.
    Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:
    • The approximate number of customers in the survey who purchase one or more energy drinks per week.
    • The approximate number of customers in the survey who prefer citrus-flavored energy drinks.
*/

#include <iostream>
using namespace std;
int main()
{
    double customers = 16500;
    double returningCustomers = 0.15;
    double citrusCustomers = 0.58;
    double customerPercentage = customers * returningCustomers;
    cout << customerPercentage << " customers buy one or more energy drink per week.\n";
    customerPercentage = customers * citrusCustomers;
    cout << customerPercentage << " customers prefer citrus drinks.\n";
}
