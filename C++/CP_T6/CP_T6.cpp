// CP_T6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <cmath>
#include <random>
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
	for (int i = 0; i < 50; ++i) std::cout << std::endl;
#endif
}

double hyponen(double x, double y) {
	double z;
	z = sqrt(x * x + y * y);
	return z;
}
void sumAvg(int lower, int upper, int& sumResult, float& avgResult) {
	int sum = 0;
	float avg = 0.0;
	for (int i = lower; i <= upper; ++i) {
		sum += i;
	}
	avg = static_cast<float>(sum) / (upper - lower + 1);
	sumResult = sum;
	avgResult = avg;
}
double clacPI(int n) {
	if (n == 1) {
		return 4.0;
	}
	for (int i = 1; i <= n; i++) {
		if (n % 2 == 1) {
			return clacPI(n - 1) + 4.0 / (2 * n - 1);
		}
		else {
			return clacPI(n - 1) - 4.0 / (2 * n - 1);
		}
	}
}
void printBinary(int n) {
	if (n <= 1) {
		cout << n;
		return;
	}
	printBinary(n / 2);
	cout << n % 2;
}

void Q1() {
	int number = 0;
	cout << "(" << __func__ << ")\n\n\n";
	double side1, side2;
	cout << "Please enter the length of first side: ";
	cin >> side1;
	cout << "Please enter the length of second side: ";
	cin >> side2;
	cout << setprecision(2) << "Hypotenuse of a " << side1 << " by " << side2 << " right triangle is " << hyponen(side1, side2);
	cout << "\n\n\n\n\n";
	main();
}

void Q2()
{
	int lower, upper, sum;
	float average;
	cout << "Enter the lower bound: ";
	cin >> lower;
	cout << "Enter the upper bound: ";
	cin >> upper;
	sumAvg(lower, upper, sum, average);
	cout << setprecision(1) << fixed;
	cout << "From " << lower << " to " << upper << ":\n";
	cout << "Sum = " << sum << endl;
	cout << "Average = " << average << endl;
	cout << "\n\n\n\n\n";
	main();
}

void Q3()
{
	int terms;
	cout << "How many terms for PI:";
	cin >> terms;
	cout << "PI with " << terms << " terms is " << setprecision(15) << fixed << clacPI(terms) << "\n";
	cout << "\n\n\n\n\n";
	main();
}

void Q4()
{
	int num;
	cout << "Input a positive decimal integer: ";
	cin >> num;
	cout << "The binary version is ";
	printBinary(num);
	cout << endl;
	cout << "\n\n\n\n\n";
	main();
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
