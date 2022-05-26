struct Clock
{
	unsigned int hours : 5; // часы 0 - 23 (5 разр€дов)
	unsigned int minutes : 6; // минуты 0 - 59 (6 разр€дов)
	unsigned int seconds : 6; // секунды 0 - 59 (6 разр€дов)
};

// ‘ - € установка времени
void TimeSetting(Clock& clock);

// ‘ - € вывод в консоль
void ConsoleOutput(Clock& clock);

// ƒвоичное в дес€тичное
unsigned int BinaryToDecimal(unsigned int n);

// ƒес€тичное в двоичное
int DecimalToBinary(int decimal);

// »нкрементирует каждую секунду поле "секунды" на еденицу.
void Increment(Clock& c);