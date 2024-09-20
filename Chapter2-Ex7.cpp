/*  Project Name: Chapter 2 Exercise 7 - Ocean levels
    File Name: Chapter2-Ex7.cpp
    Programmer: Harrison Hudgins
    Date: August 30, 2024
    Requirements:
    Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
    • The number of millimeters higher than the current level
        that the ocean’s level will be in 5 years.
    • The number of millimeters higher than the current level
        that the ocean’s level will be in 7 years.
    • The number of millimeters higher than the current level
        that the ocean’s level will be in 10 years.
    Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so
    that the user can enter the number of the number of millimeters the ocean level rises per year..
*/

#include <iostream>
using namespace std;
const double risingLevel = 1.5;

int main()
{
    double levelInYears5 = risingLevel * 5;
    cout << "After 5 years the Ocean will have risen " << levelInYears5 << " millimeters" << endl;

    double levelInYears7 = risingLevel * 7;
    cout << "After 7 years the Ocean will have risen " << levelInYears7 << " millimeters" << endl;

    double levelInYears10 = risingLevel * 10;
    cout << "After 10 years the Ocean will have risen " << levelInYears10 << " millimeters" << endl;
}
