// CP T4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void Q1() {
	int number = 0;
	cout << "(" << __func__ << ")\n\n\n";
	do {
		cout << "\n\nAttend and harken unto me, for I beckon thee to offer up a positive integer, and then let this program reveal all factors of that noble number.\t\n";
		cout << "The positive integer shall be:\t\n";
		cin >> number;
		cout << "The factor(s) of the number thee entered shall be ";
		for (int dividend = 1; dividend <= number; ++dividend)
		{
			if (number % dividend != 0)
			{
				continue;
			}
			cout << GREEN << dividend << RESET << " ";
		}
	} while (number >= 0);
	cout << "Thou hast entered a number (" << number << ") foul and negative, or non-integer, a notion that cannot be reveal into factors in the realm of real numbers.\t\n\n";
	main();
}

void Q2() {
	int counter = 1;
	int width = 6;
	cout << "(" << __func__ << ")\n\n\n";
	for (int num = 1; num <= 200; num++) {
		int dividend = 2;
		bool	holder = true;
		while (dividend * dividend <= num) {
			if (num % dividend == 0) {
				holder = false;
				break;
			}
			dividend++;
		}
		if (holder) {
			if (counter == 10) {
				cout << "\n";
				counter = 1;
			}
			cout << setw(width) << GREEN << num << RESET << "\t";
			counter++;
		}
	}
	cout << "\n\n\n\n\n";
	main();
}

void Q3() {
	int width1 = 11;
	int width2 = 21;
	int decimal = 15;
	int Switch = 0;
	cout << "(" << __func__ << ")\n\n\n";
	cout << setw(width1) << right << "Terms " << setw(width2) << right << "Value of PI\n";
	cout << setw(width1) << right << "----- " << setw(width2) << right << "-----------\n";
	for (int Terms = 10; Terms <= 100000000; Terms *= 10) {
		cout << setw(width1) << right << Terms << "\t";
		float PI = 0.0;
		int Times = 0;
		for (float counter = 1.0; Times < Terms; counter += 2)
		{
			if (Times % 2 == 0) {
				PI -= 4.0 / counter;
			}
			else {
				PI += 4.0 / counter;
			}
			++Times;
		}
		cout << setprecision(decimal) << left << fixed << GREEN << abs(PI) << RESET << "\n";
	}
	cout << "\n\n\n\n\n";
	main();
}

void Q4() {
	int size = 0;
	char types;
	cout << "(" << __func__ << ")\n\n\n";
	cout << "\n\nAttend and harken unto me, for I beckon thee to offer up a positive integer, and then let this program weaves patterns to delight thine eyes, fashioned according to the size thou dost provide.\t\n";
	cout << "The size shall be:\t\n";
	cin >> size;
	cout << "The pattern type (a,b,c,d,e) shall be:\t\n";
	cin >> types;
	for (int ceiling = 1; ceiling <= size && types >= 'a' && types <= 'e'; ceiling++) {
		cout << GREEN << "O" << RESET;
	}
	cout << "\n";
	for (int room = 1; room <= size - 2; room++) {
		for (int air = 1; air <= size; air++) {
			switch (types)
			{
			case 'a':
				if (air == 1 || air == size) {
					cout << GREEN << "O" << RESET;
				}
				else {
					cout << " ";
				}
				break;
			case 'b':
				if (air == room + 1) {
					cout << GREEN << "O" << RESET;
				}
				else {
					cout << " ";
				}
				break;
			case 'c':
				if (air == size - room) {
					cout << GREEN << "O" << RESET;
				}
				else {
					cout << " ";
				}
				break;
			case 'd':
				if (air == room + 1) {
					cout << GREEN << "O" << RESET;
				}
				else if (air == size - room) {
					cout << GREEN << "O" << RESET;
				}
				else {
					cout << " ";
				}
				break;
			case 'e':
				if (air == 1 || air == size) {
					cout << GREEN << "O" << RESET;
				}
				else if (air == room + 1) {
					cout << GREEN << "O" << RESET;
				}
				else if (air == size - room) {
					cout << GREEN << "O" << RESET;
				}
				else {
					cout << " ";
				}
				break;
			default:
				cout << endl << "Verily, in this function doth no such pattern type dwell." << endl;
				Q4();
				break;
			}
		}
		cout << "\n";
	}
	for (int ceiling = 1; ceiling <= size && types >= 'a' && types <= 'e'; ceiling++) {
		cout << GREEN << "O" << RESET;
	}
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
