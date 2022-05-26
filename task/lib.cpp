#include "lib.h"
#include <iostream>

using namespace std;

// Двоичное в десятичное
unsigned int BinaryToDecimal(unsigned int n) // из c.seconds заходит "36" (при фактическом 4)
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

// Десятичное в двоичное
int DecimalToBinary(int decimal)
{
	int binary = 0, remainder, product = 1;
	while (decimal != 0)
	{
		remainder = decimal % 2;
		binary = binary + (remainder * product);
		decimal = decimal / 2;
		product *= 10;
	}
	return binary;
}

// Ф - я установка времени
void TimeSetting(Clock& c)
{
	cout << "Введите часы: " << endl;
	int h{ 0 };
	cin >> h;
	c.hours = DecimalToBinary(h);

	cout << "Введите минуты: " << endl;
	int m{ 0 };
	cin >> m;
	c.minutes = DecimalToBinary(m);

	cout << "Введите секунды: " << endl;
	int s{ 0 };
	cin >> s;
	c.seconds = DecimalToBinary(s);
}

// Ф - я вывод в консоль
void ConsoleOutput(Clock& c)
{
	int h = BinaryToDecimal(c.hours);
	int m = BinaryToDecimal(c.minutes);
	int s = BinaryToDecimal(c.seconds);

	cout << h << ':' << m << ':' << s;
}

// Инкрементирует каждую секунду поле "секунды" на еденицу.
void Increment(Clock& c)
{
	int h{ 0 }, m{ 0 }, s{ 0 };
	s = BinaryToDecimal(c.seconds);
	s++;
	if (s > 59) // 111011 -  59
	{
		s = 0;
		c.seconds = DecimalToBinary(s);
		m = BinaryToDecimal(c.minutes);
		m++;
		if (m > 59) // 111011 -  59
		{
			m = 0;
			c.minutes = DecimalToBinary(m);
			h = BinaryToDecimal(c.hours);
			h++;
			if (h > 23) // 10111 - 23
			{
				h = 0;
				c.hours = DecimalToBinary(h);
			}
			else
				c.hours = DecimalToBinary(h);
		}
		else
			c.minutes = DecimalToBinary(m);
	}
	else
		c.seconds = DecimalToBinary(s);
}