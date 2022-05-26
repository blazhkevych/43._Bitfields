struct Clock
{
	unsigned int hours : 5; // ���� 0 - 23 (5 ��������)
	unsigned int minutes : 6; // ������ 0 - 59 (6 ��������)
	unsigned int seconds : 6; // ������� 0 - 59 (6 ��������)
};

// � - � ��������� �������
void TimeSetting(Clock& clock);

// � - � ����� � �������
void ConsoleOutput(Clock& clock);

// �������� � ����������
unsigned int BinaryToDecimal(unsigned int n);

// ���������� � ��������
int DecimalToBinary(int decimal);

// �������������� ������ ������� ���� "�������" �� �������.
void Increment(Clock& c);