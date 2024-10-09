/*  Project Name: Chapter 3 Exercise 18 - Interest Earned
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: October 9, 2024
    Requirements:
    Write a program that asks for the principal,
    interest rate, and number of times the interest is compounded
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double rate;
double T;
double balance;

double total;
double interest;

int main()
{
    cout << "Enter the interest rate %:\n";
        cin >> rate;
        rate = rate * 0.01;
    cout << "Enter the number of times the interest is compounded:\n";
        cin >> T;
    cout << "Enter the balance of the account:\n";
        cin >> balance;

    total = balance * (pow((1 + (rate / T)), T));
    interest = total - balance;
    cout << setprecision(2) << fixed;
    cout << "Interest Rate:      " << setw(8) << rate * 100 << "%\n";
    cout << "Times Compounded:    " << setw(8) << T << endl;
    cout << "Principal:        " << setw(8) << "$ " << balance << endl;
    cout << "Interest:         " << setw(8) << "$ " << interest << endl;
    cout << "Amount in Savings:" << setw(8) << "$ " << total;
}
