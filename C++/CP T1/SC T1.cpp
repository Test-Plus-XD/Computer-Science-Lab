// SC T1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
using namespace std;

void Q5() {
	int num, A, B;
	cout << "(Q5)\n\n";
	cout << "Enter a two-digit integer (00 - 99): \t\n";
	cin >> num;
	A = num / 10;
	B = num % 10;
	cout << "The two digits are: \t" << GREEN << A << RESET << " and " << GREEN << B << RESET << "\n\n\n\n\n";
}

void Q4() {
	double X, ans;
	cout << "(Q4)\n\n";
	cout << "Enter the value (x): \t\n";
	cin >> X;
	ans = ((3 + 4 * X) / 10) - ((10 * (X - 2) * (X - 2)) / (X - 3));
	cout << "The answer could be: \t" << GREEN << ans * ans << RESET << "\n\n\n\n\n";
	Q5();
}

void Q3() {
	double R, H, V;
	double Pi = 3.14159265;
	cout << "(Q3)\n\n";
	cout << "Enter the radius (in cm): \t\n";
	cin >> R;
	cout << "Enter the height (in cm): \t\n";
	cin >> H;
	V = Pi * R * R * H / 3;
	cout << "The volume of the cone could be: \t" << GREEN << V << RESET << "cm\u00B3 or cm^3" << "\n\n\n\n\n";
	Q4();
}

void Q2() {
	double M, CM;
	cout << "(Q2)\n\n";
	cout << "Input meter: \t\n";
	cin >> M;
	CM = 100 * M;
	cout << "Meter: \t" << GREEN << M << RESET << "  Centimeter: " << GREEN << CM << RESET << "\n\n\n\n\n";
	Q3();
}

int main()
{
	Q2();
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
