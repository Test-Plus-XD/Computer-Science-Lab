// CP T2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <cmath>
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
using namespace std;

void Clear();

void Clear()
{
#if defined(_WIN32)
	system("cls");   //On windows, do this
#elif defined (__unix__) || (defined (__APPLE__) && defined (__MACH__))
	system("clear");//On Linux/OS X/BSDs
#else                   //For an unrecognized OS, just print 50 newlines
	for (int i = 0; i < 50; ++i) std::cout << std::endl;
#endif
}

void Q6() {
	int Day, Month, Year;
	cout << "(Q6)\n\n\n";
	cout << "Input day month year: \t\n";
	cin >> Day >> Month >> Year;
	if (Year != 0 && (Month >= 1 && Month <= 12) && Day != 0) {
		if ((Day <= 30 && (Month == 4 || Month == 6 || Month == 9 || Month == 11)) ||
			(Day <= 31 && (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12)) ||
			(Month == 2 && (Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)? Day <= 29 : Day <= 28) {
			cout << "\t" << GREEN << Day << "  " << Month << "  " << Year << " does exist" << RESET << "\n\n\n\n\n";
		}
		else {
			cout << "\t" << "Such date does NOT exist" << "\n\n\n\n\n";
			Q6();
		}
	}
	else {
		cout << "\t" << "Such date does NOT exist" << "\n\n\n\n\n";
	}
}

void Q5() {
	int value, type;
	cout << "(Q5)\n\n\n";
	cout << "What is the principal value? \t\n";
	cin >> value;
	cout << "What is the customer type? \t\n";
	cin >> type;
	cout << setprecision(1);
	switch (type) {
	case 0:
		cout << "\t" << "Interest payable after one year: $" << GREEN << value * 0.005 << RESET << "\n\n\n\n\n";
		break;
	case 1:
		cout << "\t" << "Interest payable after one year: $" << GREEN << value * 0.008 << RESET << "\n\n\n\n\n";
		break;
	case 2:
		cout << "\t" << "Interest payable after one year: $" << GREEN << value * 0.01 << RESET << "\n\n\n\n\n";
		break;
	case 3:
		cout << "\t" << "Interest payable after one year: $" << GREEN << value * 0.012 << RESET << "\n\n\n\n\n";
		break;
	case 4:
		cout << "\t" << "Interest payable after one year: $" << GREEN << value * 0.02 << RESET << "\n\n\n\n\n";
		break;
	default:
		cout << "\t" << "Customer type is NOT supported" << "\n\n\n\n\n";
	}
	Q6();
}

void Q4() {
	double x, y, z;
	int w = 11;
	cout << "(Q4)\n\n\n";
	cout << "Enter the opposite: \t\n";
	cin >> x;
	cout << "Enter the adjacent: \t\n";
	cin >> y;
	cout << "Enter the hypotenuse: \t\n";
	cin >> z;
	if ((x + y > z) and ((sin(x / z) + cos(y / z)) <= 1.261349183) and ((sin(x / z) + cos(y / z)) > 1.261349182)) {
		cout << setprecision(3);
		cout << fixed;
		cout << "\t" << GREEN << setw(w) << "sinA" << "\t" << setw(w) << "cosA" << "\t" << setw(w) << "tanA" << RESET << "\t\n";
		cout << "\t" << GREEN << setw(w) << x/z << "\t" << setw(w) << y/z << "\t" << setw(w) << x/y << RESET << "\n\n\n\n\n";
	}else
		cout << "\t" << "That is NOT a a right-angled triangle" << "\n\n\n\n\n";
	Q5();
}

void Q3() {
	int Year;
	cout << "(Q3)\n\n\n";
	cout << "Enter the year: \t\n";
	cin >> Year;
	if (Year % 400 == 0 or Year % 4 == 0 and Year % 100 != 0) {
		cout << "\t" << GREEN << Year << " is a leap year " << RESET << "\n\n\n\n\n";
	}
	else {
		cout << "\t" << GREEN << Year << " is NOT a leap year " << RESET << "\n\n\n\n\n";
	}
	Q4();
}

void Q2() {
	int X, Y;
	cout << "(Q2)\n\n\n";
	cout << "Input X: \t\n";
	cin >> X;
	cout << "Input Y: \t\n";
	cin >> Y;
	cout << "\t" << GREEN << X << " is" << ((Y % X == 0)? " " : " NOT ") << "a factor of " << Y << RESET << "\n\n\n\n\n";
	Q3();
}

void Q1() {
	int num, A, B;
	cout << "(Q1)\n\n\n";
	cout << "Enter a two-digit integer (00 - 99): \t\n";
	cin >> num;
	A = num / 10;
	B = num % 10;
	if (A / 10 >= 1) {
		cout << "\t" << "That is NOT a two-digit integer" << "\n\n\n\n\n";
	}
	else if (A != B) {
		if (A < B) {
			cout << "\t" << GREEN << A << " < " << B << RESET << "\n\n\n\n\n";
		}
		else {
			cout << "\t" << GREEN << A << " > " << B << RESET << "\n\n\n\n\n";
		}
	}
	else {
		cout << "\t" << "Both digit are same" << "\n\n\n\n\n";
	}
	Q2();
}

int main()
{
	Q1();
	cin.ignore();
	cin.get();
	Clear();
	main();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
