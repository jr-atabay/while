#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int num, line;
	char simbol;
	int a = 0;

	cout << "Введите количесто симбола: " << endl;
	cin >> num;

	cout << "Ведите симбол: " << endl;
	cin >> simbol;

	cout << "Выберите тип линия: " << endl
		<< "1 - вертикальная " << endl
		<< "2 - горизоньтальная " << endl;
	cin >> line;

	while (a<num)
	{
		if (line == 1)
		{
			cout << simbol << endl;
		}
		if (line == 2)
		{
			cout << simbol;
		}
		a++;
	}
}


