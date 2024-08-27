/*  Project Name: Checkpoints
    Branch: Checkpoint-2.17
    Programmer: Harrison Hudgins
    Date: August, 27, 2024
    Requirements:
    Write a program that stores your name, address, and phone number in three separate string
    objects. Display the contents of the string objects on the screen

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
    string String3;
    cout << "Please enter your name: ";
    cin >> String1;
    cout << "Please enter your address: ";
    cin >> String2;
    cout << "Please enter your phone number: ";
    cin >> String3;
    cout << "Your information includes: \nYour name: " << String1 << "\nYour address: " << String2 << "\nYour phone number: " << String3;
}