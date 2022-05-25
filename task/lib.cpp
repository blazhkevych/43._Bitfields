#include "lib.h"
#include <iostream>

using namespace std;

// Двоичное в десятичное
unsigned int BinaryToDecimal(unsigned int n)
{
	int decimalNumber = 0;
	int base = 1;
	int temp = n;
	while (temp)
	{
		int lastDigit = temp % 10;
		temp = temp / 10;
		decimalNumber += lastDigit * base;
		base = base * 2;
	}
	return decimalNumber;
}

// Ф - я установка времени
void TimeSetting(Clock& c)
{
	cout << "Введите часы: " << endl;
	int h{ 0 };
	cin >> h;
	c.hours = h;

	cout << "Введите минуты: " << endl;
	int m{ 0 };
	cin >> m;
	c.minutes = m;

	cout << "Введите секунды: " << endl;
	int s{ 0 };
	cin >> s;
	c.seconds = s;
}

// Ф - я вывод в консоль
void ConsoleOutput(Clock& c)
{
	cout << BinaryToDecimal(c.hours) << ':' << BinaryToDecimal(c.minutes) << ':' << BinaryToDecimal(c.seconds);
}