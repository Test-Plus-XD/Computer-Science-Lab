// CP T3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void Q1() {
	int num;
	// Seed the random number generator
	random_device rd;
	mt19937 gen(rd());
	// Define the range for the random number
	int min = 1;
	int mix = 100;
	std::uniform_int_distribution<int> dist(min, mix);
	// Generate a random number within the defined range
	int random_number = dist(gen);
	cout << "(Q1)\n\n\n";
	cout << "I have a number betwixt 1 and 100.\t\n";
	cout << "Thee can choose any value for the answer.\t\n";
	int t = 0;
	do {
		cin >> num;
		if (num == random_number) {
			cout << "\t" << GREEN << "Correct guess." << RESET << "\n\n\n\n\n";
			cout << "\t" << "Thou tried " << GREEN << t << RESET << " time(s)" << "\n\n\n\n\n";
		}
		if (num < random_number) {
			if (num - random_number > -10) {
				cout << "\t" << "Dost thou surmise a tad higher, thou art nigh." << "\n\n";
			}
			else {
				cout << "\t" << "Summon greater valor, hazard a higher guess." << "\n\n";
			}
		}
		if (num > random_number) {
			if (num - random_number <10) {
				cout << "\t" << "Dost thou surmise a tad lower, thou art nigh." << "\n\n";
			}
			else {
				cout << "\t" << "Summon greater valor, hazard a lower guess." << "\n\n";
			}
		}
		++t;
	} while (num != random_number);
	main();
}

void Q2() {
	int n = 1;
	int t = 1;
	int ans = 1;
	cout << "(Q2)\n\n\n";
	cout << "Input, a number non-negative, and lo, I shall reveal the factorial of thine number.\t\n";
	cin >> n;
	t = n;
	if (n > 0) {
		for (t = n; t > 0; t--)
		{
            ans *= t;
        }
		cout << "Behold, this doth represent the factorial of thy number:" << "\t" << GREEN << ans << RESET << "\n\n\n\n\n";
	}
	else {
		cout << "Thou hast entered a number (" << n << ") foul and negative, a notion that cannot be made into a factorial in the realm of real numbers.\t\n";
		Q2();
	}
	main();
}

void Q3() {
	int A, B, smaller, larger;
	int ans = 0;
	cout << "(Q3)\n\n\n";
	cout << "This program shall receive two integers, known henceforth as A and B. Then shall it undertake a noble task: to tally the sum of all odd integers betwixt the lesser of A and B, and the greater thereof.\t\n";
	cout << "A shall be:\t\n";
	cin >> A;
	cout << "B shall be:\t\n";
	cin >> B;
	if (A > B) {
		smaller=B;
		larger=A;
	}else if (A < B){
		smaller=A;
		larger=B;
	}
	else {
		cout << "Thou hast entered numbers (" << A <<","<< B << ") of equity, notions that cannot tally the sum.\t\n";
		Q3();
	}
	for (int i = smaller; i <= larger; i++){
		if ( i % 2 == 1){
			ans += i;}
	}
	cout << "Behold! The numbers " << GREEN << smaller << RESET << " and " << GREEN << larger << RESET << " .Now, lo! The sum of all odd integers between them: " << "\t" << GREEN << ans << RESET << "\n\n\n\n\n";
	main();
}

void Q4() {
	int exp;
	double base, ans = 1;
	cout << "(Q4)\n\n\n";
	cout << "Attend and heed my command, for I dost bid thee to pen the base, a noble double, and the exponent, an integer of valor.\t\n";
	cout << "Base shall be:\t\n";
	cin >> base;
	cout << "Exponent shall be:\t\n";
	cin >> exp;
	if (base == 0) {
		ans = 1;
	}
	else if (base <0)
	{
		base = -base;
		for (int i = exp ; i > 0; i--) {
			ans *= base;
		}
		ans = -ans;
	}
	else {
		for (int i = exp; i > 0; i--) {
			ans *= base;
		}
	}
	cout << "Behold! The number " << GREEN << base << RESET << " to the power " << GREEN << exp << RESET << " yields  " << "\t" << GREEN << ans << RESET << "\n\n\n\n\n";
	main();
}

void Q5() {
	int num;
	int dividend = 2;
	bool	holder = true;
	cout << "(Q5)\n\n\n";
	cout << "Attend and harken unto me, for I beckon thee to offer up a positive integer, and then let this program proclaim whether the number offered is a prime or not.\t\n";
	cout << "Know ye this truth - all numbers, be they prime or naught, are divisible by 1 and themselves. Yet a prime, in its singular majesty, holds no other companions save one and itself.\t\n\n";
	cout << "The positive integer shall be:\t\n";
	cin >> num;
	while (holder == true && num > 1 && 2*dividend <= num) {
		if (num % dividend == 0) {
			holder = false;
		}
		dividend++;
	}
	if (!holder || num <= 1) {
		cout << "Thou hast entered a number (" << num << ") foul and negative, or non - integer, a notion that cannot be made into a factorial in the realm of real numbers.\t\n";
		Q5();
	}
	else if (holder) {
			cout << "The number thee entered " << GREEN << num << RESET << " is indeed a prime number." << "\n\n\n\n\n";
	}
	main();
}

int main()
{
	cout << "\n\t\n";
	int Question;
	do {
		cout << "Hark! Thou art bidden to select a function, numbered from 1 to 5, by entering the digits betwixt." << "\n\n";
		cout << "|-=> ";
		cin >> Question;
		switch (Question)
		{
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
		case 5:
			Clear();
			Q5();
			break;
		default:
			cout << "Verily, in this program doth no such function dwell." << endl;
			Clear();
			break;
		}
	} while (1 <= Question <= 5);
	cin.ignore();
	cin.get();
	Clear();
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
