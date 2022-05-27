struct Clock
{
	unsigned hours : 5; // часы 0 - 23 (5 разр€дов)
	unsigned minutes : 6; // минуты 0 - 59 (6 разр€дов)
	unsigned seconds : 6; // секунды 0 - 59 (6 разр€дов)
};

// ‘ - € установка времени
void TimeSetting(Clock& clock);

// ‘ - € вывод в консоль
void ConsoleOutput(Clock& clock);

// »нкрементирует каждую секунду поле "секунды" на еденицу.
void Increment(Clock& c);