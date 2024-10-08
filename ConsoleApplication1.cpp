/*  Project Name: Chapter 4 Exercise 23 - Geometry Calculator
	File Name: Checkpoint-4-Exercise-23-Harrison_Hudgins.cpp
	Programmer: Harrison Hudgins
	Date: October 8, 2024
	Requirements:
	Make a calculator that can computer the area of a circle, rectangle and triangle that accounts for negative numbers
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	while (true)
	{
		int choice;
		double area;
		double radius;
		double width;
		double length;
		double base;
		double height;
		double pi = 3.1419;
		cout << "1 Computer the Area of a circle\n";
		cout << "2 Computer the Area of a rectangle\n";
		cout << "3. Computer the Area of a triangle\n";
		cout << "4. Quit\n";
		cout << "Enter your choice (1–4):\n\n";
			cin >> choice;
		switch (choice)
			{
				case 1:
					cout << "What is the radius of the circle?\n";
					cin >> radius;
					if (radius < 0)
					{
						cout << "Enter a valid number.\n\n";
						break;
					}
					area = pow(radius, 2) * pi;
					cout << "The area of the circle is " << area << "\n\n";;
				case 2:
					if (choice != 2) break;
					cout << "What is the length of the rectangle?\n";
					cin >> length;
					if (length < 0)
					{
						cout << "Enter a valid number.\n\n";
						break;
					}
					cout << "What is the width of the rectangle?\n";
					cin >> width;
					if (width < 0)
					{
						cout << "Enter a valid number.\n\n";
						break;
					}
					area = length * width;
					cout << "The area of the rectangle is " << area << "\n\n";
				case 3:
					if (choice != 3) break;
					cout << "What is the base of the triangle?\n";
					cin >> base;
					if (base < 0)
					{
						cout << "Enter a valid number.\n\n";
						break;
					}
					cout << "What is the height of the triangle?\n";
					cin >> height;
					if (height < 0)
					{
						cout << "Enter a valid number.\n\n";
						break;
					}
					area = (base * height) * 0.5;
					cout << "The area of the triangle is " << area << "\n\n";
				case 4:
					if (choice != 4) break;
					return 0;
				default: cout << "Please make a valid choice\n";
			}
	}
}
