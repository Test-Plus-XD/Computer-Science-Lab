// CP T5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <random>
#define _USE_MATH_DEFINES
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
using namespace std;

int main();

void Clear()
{
#if defined(_WIN32)
	system("cls");   //On windows, do this
#elif defined (__unix__) || (defined (__APPLE__) && defined (__MACH__))
	system("clear");//On Linux/OS X/BSDs
#else                   //For an unrecognized OS, just print 50 newlines
	for (int i = 0; i < 50; ++i) cout << endl;
#endif
}

double sinradian, cosradian, degree = 0;
const double pi = 3.14159265;
double sindegree(double degree) {
	double sinradian = sin(degree * pi / 180);
	return sinradian;
}
double cosdegree(double degree) {
	double cosradian = cos(degree * pi / 180);
	return cosradian;
}
void Q1() {
	cout << "(" << __func__ << ")\n\n\n";
	cout << left << "Degree Sin Cos" << "\n";
	for (int degree = 0; degree <= 360; degree += 10) {
		cout << left << fixed << degree << " " << setprecision(6) << sindegree(degree) << " " << cosdegree(degree) << "\n";
	}
	cout << "\n\n\n\n\n";
	main();
}
	
void Q2()
{
	cout << "(" << __func__ << ")\n\n\n";
	cout << left << setw(10) << "Degree" << setw(15) << "Sin" << setw(15) << "Cos" << "\n";
	for (int degree = 0; degree <= 360; degree += 10) {
		cout << left << setw(10) << showpos << fixed << degree << setw(15) << setprecision(4) << sindegree
		(degree) << setw(15) << cosdegree(degree) << "\n";
	}
	cout << "\n\n\n\n\n";
	main();
}

void Q3()
{
	cout << "(" << __func__ << ")\n\n\n";
	float base1, base2;
	int exponent_value, exponent_value2;
	cout << "Enter the base value: ";
	cin >> base1;
	cout << "Enter the exponent_value: ";
	cin >> exponent_value;
	base2 = 1;
	exponent_value2 = exponent_value;
	if (exponent_value < 0) {
		exponent_value = -1 * exponent_value;
		for (int i = 1; i <= exponent_value; i++) {
			base2 *= base1;
		}
		base2 = 1 / base2;
	}
	else if (exponent_value > 0) {
		for (int i = 1; i <= exponent_value; i++) {
			base2 *= base1;
		}
	}
	else {
		base2 = 1;
	}
	if (exponent_value2 >= 0) {
		cout << base1 << " to the power " << exponent_value << " is " << base2;
	}
	else {
		cout << base1 << " to the power " << '-' << exponent_value << " is " << base2;
	}
	cout << "\n\n\n\n\n";
	main();
}
void nChar(int n, char c)
{
	for (int i = 0; i < n; i++)
		cout << c;
}
void Q4()
{
	cout << "(" << __func__ << ")\n\n\n";
	int input_num = 5;
	int stars = 1;
	int space = 0;
	cout << "(a) \n \n";
	for (int i = 1; i <= input_num; i++) {
		nChar(stars, '*');
		cout << "\n";
		stars += 1;
	}
	cout << "\n";
	cout << "(b) \n \n";
	input_num = 5;
	stars = 5;
	for (int i = 1; i <= input_num; i++) {
		nChar(stars, '*');
		cout << "\n";
		stars -= 1;
	}
	cout << "\n";
	cout << "(c) \n \n";
	input_num = 5;
	stars = 1;
	space = input_num - 1;
	for (int i = 1; i <= input_num; i++) {
		nChar(space, ' ');
		nChar(stars, '*');
		nChar(space, ' ');
		cout << "\n";
		stars += 2;
		space -= 1;
	}
	cout << "\n";
	cout << "(d) \n \n";
	input_num = 5;
	stars = 1;
	space = input_num - 1;
	for (int i = 1; i <= input_num; i++) {
		nChar(space, ' ');
		nChar(stars, '*');
		nChar(space, ' ');
		cout << "\n";
		stars += 2;
		space -= 1;
	}
	stars -= 4;
	space += 2;
	for (int i = 2; i <= input_num; i++) {
		nChar(space, ' ');
		nChar(stars, '*');
		nChar(space, ' ');
		cout << "\n";
		stars -= 2;
		space += 1;
	}
	cout << "\n";
	cout << "(e) \n \n";
	input_num = 5;
	stars = 1;
	space = 0;
	for (int i = 1; i <= 3; i++) {
		space = input_num - 1;
		stars = 1;
		for (int i = 1; i <= input_num; i++) {
			nChar(space, ' ');
			nChar(stars, '*');
			nChar(space, ' ');
			cout << "\n";
			stars += 2;
			space -= 1;
		}
	}
	cout << "\n\n\n\n\n";
	main();
}

void Q5()
{
	//=================
}
 
int main()
{
	int Question = -1;
	int const Options = 4;
	cout << "Hark! Thou art bidden to select a function, numbered from 1 to " << Options << ", by entering the digits betwixt, or bid farewell to this program with 0." << "\n\n";
	cout << "|-=> ";
	cin >> Question;
	switch (Question)
	{
	case 0:
		Clear();
		cout << endl << "Shouldst thou truly wish to bid farewell to this program, then presseth the Enter key upon thy keyboard." << endl;
		cin.get();
		exit(0);
		break;
	case 1:
		Clear();
		Q1();
		break;
	case 2:
		Clear();
		Q2();
		break;
	case 3:
		Clear();
		Q3();
		break;
	case 4:
		Clear();
		Q4();
		break;
		//case 5:
		//	Clear();
		//	Q5();
		//	break;
	default:
		Clear();
		cout << endl << "Alas! In the kingdom of code, thy command hath fallen upon deaf ears, for no function bearing that name doth dwell within this program.\nPray, take heed and choose from among the options bestowed upon thee, ranging from the humblest " << GREEN << "1 to the grand " << Options << RESET << ", for therein lies the path to thy desired destination.\nLet not thy heart be heavy with lament, for though this road be fraught with unexpected twists and turns, it shall lead thee to the coveted land of solution.\nChoose wisely, and let not despair cloud thy noble quest for knowledge and mastery of the arcane arts of programming.\n" << endl;
		main();
		break;
	}
	cin.ignore();
	cin.get();
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