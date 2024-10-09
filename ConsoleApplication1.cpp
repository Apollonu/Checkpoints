/*  Project Name: Chapter 3 Exercise 17 - Math Tutor
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: October 9, 2024
    Requirements:
    Write a program that can be used as a math tutor for a young student.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int input;
int total;

int main()
{
    unsigned seed = time(0);
    srand(seed);
    int num1 = rand() % 1000;
    int num2 = rand() % 1000;

    cout << "  " << num1 << "\n";
    cout << "+ " << num2 << "\n";
    cout << "--------\n";
    cin >> input;
    total = num1 + num2;
    cout << total;
}
