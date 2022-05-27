#include "lib.h"
#include <iostream>

using namespace std;

// � - � ��������� �������
void TimeSetting(Clock& c)
{
	cout << "������� ����: " << endl;
	unsigned h{ 0 };
	cin >> h;
	c.hours = h;

	cout << "������� ������: " << endl;
	unsigned m{ 0 };
	cin >> m;
	c.minutes = m;

	cout << "������� �������: " << endl;
	unsigned s{ 0 };
	cin >> s;
	c.seconds = s;
}

// � - � ����� � �������
void ConsoleOutput(Clock& c)
{
	unsigned h = c.hours;
	unsigned m = c.minutes;
	unsigned s = c.seconds;

	if (h < 10)
		cout << 0 << h;
	else
		cout << h;
	cout << ':';
	if (m < 10)
		cout << 0 << m;
	else
		cout << m;
	cout << ':';
	if (s < 10)
		cout << 0 << s;
	else
		cout << s;
}

// �������������� ������ ������� ���� "�������" �� �������.
void Increment(Clock& c)
{
	unsigned h{ 0 }, m{ 0 }, s{ 0 };
	c.seconds++;
	if (c.seconds > 59)
	{
		c.seconds = 0;
		c.minutes++;
		if (c.minutes > 59)
		{
			c.minutes = 0;
			c.hours++;
			if (c.hours > 23)
			{
				c.hours = 0;
			}
		}
	}
}