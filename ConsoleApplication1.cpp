#include <iostream>
#include <cmath>
using namespace std;

int choice;
double num1;
double num2;
double ans;

int main()
{
    while (true)
    {
        cout << "Choose an operation to use with 2 numbers, or a value less than 1 to quit.\n";
        cout << "1. Add\n2. Subtract\n3. Multiplication\n4. Division\n5. Power\n\n";
            cin >> choice;
        if (choice < 1) break;
        else if (choice == 1)
        {
            cout << "\nEnter a number: ";
            cin >> num1;
            cout << "\nEnter another number: ";
            cin >> num2;
            ans = num1 + num2;
        }
        else if (choice == 2)
        {
            cout << "\nEnter a number: ";
            cin >> num1;
            cout << "\nEnter another number: ";
            cin >> num2;
            ans = num1 - num2;
        }
        else if (choice == 3)
        {
            cout << "\nEnter a number: ";
            cin >> num1;
            cout << "\nEnter another number: ";
            cin >> num2;
            ans = num1 * num2;
        }
        else if (choice == 4)
        {
            cout << "\nEnter a number: ";
            cin >> num1;
            cout << "\nEnter another number: ";
            cin >> num2;
            ans = num1 / num2;
        }
        else if (choice == 5)
        {
            cout << "\nEnter a number: ";
            cin >> num1;
            cout << "\nEnter another number: ";
            cin >> num2;
            ans = pow(num1, num2);
        }
        cout << "\nYour answer is: " << ans << "\n";
    }
}
