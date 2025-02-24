// Individual Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int main()
{
	int Size = 0, Half = 1;
	cout << "\n\nAttend and harken unto me, for I beckon thee to offer up a positive integer, and then let this program weaves patterns to delight thine eyes, fashioned according to the size thou dost provide.\t\n";
	cout << "The size shall be:\t\n";
	cin >> Size;
	Clear();
	for (int Y = 0; Y < Size && Y >= 0; Y += Half) {
		if (Size % 2 == 0 && Y == Size / 2) {
			Half = -1;
			continue;
		}
		else if (Size % 2 != 0 && Y == Size / 2) {
			Half = -1;
		}
		for (int X = Size; 0 <= X; X--) {
			if (Y == X || X == 0 || Y == 0 || X == Size || Y == Size - 1) {
				cout << GREEN << "O" << RESET;
			}
			else {
				cout << " ";
			}
		}
		cout << "\n";
	}
	cout << "\n\n\n\n\n";
	main();
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
