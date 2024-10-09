/*  Project Name: Chapter 3 Exercise 17 - Math Tutor
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: October 9, 2024
    Requirements:
    Create a second branch that revises your code and states
    if the user was correct or not
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
    if (input == total) cout << "You are correct";
    else cout << "Your answer is not correct";
}
