// CP_T7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ctime>
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
	for (int i = 0; i < 50; ++i) std::cout << std::endl;
#endif
}

class Date
{
public:
	void setDate(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
	void print() {
		cout << day << "-" << month << "-" << year;
	}
private:
	int day;
	int month;
	int year;
};

void Q1() {
	int number = 0;
	cout << "(" << __func__ << ")\n\n\n"; 
	Date xmas;
	xmas.setDate(25, 12, 2013);
	cout << "Xmas is: ";
	xmas.print();
	cout << "\n\n\n\n\n";
	main();
}

class Car
{
public:
	Car() {
		speed = 0;
	}
	void showSpeed() {
		cout << "The car is moving at " << speed << " km/h." << endl;
	}
	void accelerate(int a) {
		cout << "Accelerating ... " << endl;
		speed += a;
		if (speed > 150) {
			speed = 150;
		}
	}
	void decelerate(int b) {
		cout << "Accelerating ... " << endl;
		speed -= b;
	}
	void stop() {
		cout << "Stopping ... " << endl;
		speed = 0;
	}

private:
	int speed; // speed of the car, in km/h
};

void Q2() {
	cout << "(" << __func__ << ")\n\n\n";

	Car myCar;
	myCar.showSpeed();
	myCar.accelerate(70);
	myCar.showSpeed();
	myCar.decelerate(20);
	myCar.showSpeed();
	myCar.accelerate(120);
	myCar.showSpeed();
	myCar.decelerate(100);
	myCar.showSpeed();
	myCar.stop();
	myCar.showSpeed();

	cout << "\n\n\n\n\n";
	main();
}

class Phone
{
public:
	Phone(string A, string B) : brand(A), OS(B), price(0) {}
	void showConfig() {
		cout << "Brand :\t" << brand << "\n";
		cout << "OS :\t" << OS << "\n";
		cout << "Price :\t$" << setprecision(2) << fixed << price << "\n";
	}
	void setPrice(int X) {
		if (X < 0) {
			cout << "$ cant < 0\n";
			return;
		}
		price = X;
	}


private:
	int price;
	string brand;
	string OS;
};

void Q3() {
	cout << "(" << __func__ << ")\n\n\n";

	Phone iPhone("Apple", "iOS version 6");
	Phone noteTwo("Samsung", "Android 4.1");
	iPhone.setPrice(5588);
	noteTwo.setPrice(4630);
	cout << "Specification of iPhone:" << endl;
	iPhone.showConfig();
	cout << "\nSpecification of Note 2:" << endl;
	noteTwo.showConfig();

	cout << "\n\n\n\n\n";
	main();
}

class Account 
{
private:
	double balance;
public:
	Account(int money) {};
	void transfer(Account& A1, Account& A2) {

	}
	void credit(double add){
		
	}
	void debit(double deduct) {

	}
	void getBalance() {

	}
};

void Q4() {
	int number = 0;
	cout << "(" << __func__ << ")\n\n\n";

	Account peter(1000), mary(1500);
	int option;
	cout << fixed << setprecision(2);
	do {
		cout << "\n";
		cout << "Peter's balance: " << peter.getBalance() << endl;
		cout << "Mary's balance: " << mary.getBalance() << endl;
		cout << "------\n";
		cout << "(1) Transfer money from Peter to Mary\n";
		cout << "(2) Transfer money from Mary to Peter\n";
		cout << "(3) Quit\n";
		cout << "Option: ";
		cin >> option;
		switch (option) {
		case 1: transfer(peter, mary); break;
		case 2: transfer(mary, peter); break;
		case 3: cout << "Bye Bye.\n"; break;
		default: cout << "Incorrect option.\n";
		}
	} while (option != 3);
 
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
