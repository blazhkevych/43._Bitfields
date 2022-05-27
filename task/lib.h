struct Clock
{
	unsigned hours : 5; // ���� 0 - 23 (5 ��������)
	unsigned minutes : 6; // ������ 0 - 59 (6 ��������)
	unsigned seconds : 6; // ������� 0 - 59 (6 ��������)
};

// � - � ��������� �������
void TimeSetting(Clock& clock);

// � - � ����� � �������
void ConsoleOutput(Clock& clock);

// �������������� ������ ������� ���� "�������" �� �������.
void Increment(Clock& c);