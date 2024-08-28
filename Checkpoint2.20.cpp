/*  Project Name: Checkpoints
    Branch: Checkpoint-2.20
    Programmer: Harrison Hudgins
    Date: August, 27, 2024
    Requirements:
    Write a program that defines an integer variable named age and a float variable named weight.
    Store your age and weight, as literals, in the variables. The program should display these values on
    the screen in a manner similar to the following:
    My age is 26 and my weight is 120 pounds.
    (Feel free to lie to the computer about your age and your weight—it’ll never know!)
    Replace the code in the main function with the code for this program. Compile and run the
    program. Verify that it is producing the correct results.
*/


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string String1;
    string String2;
    cout << "Please enter your age: ";
    cin >> String1;
    cout << "Please enter your weight in pounds: ";
    cin >> String2;
    cout << "My age is " << String1 << " and my weight is " << String2 << " pounds";
}