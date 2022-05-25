struct Clock
{
    unsigned hours : 5; // часы 0 - 23 (5 разрядов)
    unsigned minutes : 6; // минуты 0 - 59 (6 разрядов)
    unsigned seconds : 6; // секунды 0 - 59 (6 разрядов)
};

// Ф - я установка времени
void TimeSetting(Clock &clock);

// Ф - я вывод в консоль
void ConsoleOutput(Clock& clock);

// Двоичное в десятичное
unsigned int BinaryToDecimal(int n);