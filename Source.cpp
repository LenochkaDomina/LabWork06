#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;

int main()
{
	//вибір завдання
	cout << "PracticeWork_06 413 Domina Olena" << endl;
	int i = 1;
	cout << "Enter i = 1 for Task 1\n"
		<< "Enter i = 2 for Task 2\n"
		<< "Enter i = 3 for Task 3\n"
		<< "Enter i = 4 for Task 4\n";
	cout << "i = ";
	cin >> i;

	switch (i)
	{
	case 2:
	{
		//завдання 2 про значення у від округлення а
		int x;
		float a;
		cout << "Enter x and a for calculate y" << endl;
		cout << "x = ";
		cin >> x;
		cout << "a = ";
		cin >> a;
		int b = round(a);

		switch (b)
		{
		case 0:
			cout << "y = " << pow(x, 2) - a / 2 << endl;
			break;
		case 1:
			cout << "y = 1" << endl;
			break;
		case 2:
			cout << "y = " << 2 * pow(x, 1.0f / 3.0f) << endl;
			break;
		default:
			cout << "y = 0" << endl;
		}
	}
	break;
	case 3:
	{
		//завдання 3 відповідність точки графічній області
		float x, y;
		cout << "Enter (x ; y)" << endl;
		cout << "x = ";
		cin >> x;
		cout << "y = ";
		cin >> y;

		cout << boolalpha << ((pow(x, 2) + pow(y, 2) <= 4) && y <= 0 && !(abs(x) < 1 && abs(y) < 1)) << endl;
	}
	break;
	case 4:
	{
		//завдання 4 розрахунок прикладу з врахуванням ОДЗ
		float a, x, b;
		cout << "Enter a, x, b for calculate Y" << endl;
		cout << "a=";
		cin >> a;
		cout << "x=";
		cin >> x;
		cout << "b=";
		cin >> b;

		if (!(pow(pow(a * x - 1.72f, 2), 1.0f / 3.0f) + 4.75f * pow(10, 1.2) * (a - x) - pow(cos(b - x), 2) == 0) && abs(b + x) <= 1)
		{
			cout << "\nY="
				<< (1.9f * pow(10, 3) * x - exp(a * x) + asin(b + x) - log10(pow(x, 2)) + a) / (pow(pow(a * x - 1.72f, 2), 1.0f / 3.0f) + 4.75f * pow(10, 1.2) * (a - x) - pow(cos(b - x), 2))
				<< endl;
		}
		else
			cout << "Y doesn't exist" << endl;
	}
	break;
	default:
	{
		//завдання 1 про розрахунок у залежно від значення х
		float x, a;
		cout << "Enter x and a for calculate Y" << endl;
		cout << "x = ";
		cin >> x;
		cout << "a = ";
		cin >> a;

		if (x < 0 && abs(a) > 0 && pow(x, 2) / pow(a, 2) <= 1 && !(cos(x) == 0))
		{
			cout << "Y = " << 2 * a * pow(1 - pow(x, 2) / pow(a, 2), 0.5f) << endl;
		}
		if (x >= 0 && abs(a) > 0 && pow(x, 2) / pow(a, 2) <= 1 && !(cos(x) == 0))
		{
			cout << "Y = " << a / (2 * cos(x)) + 3 * a / 2 << endl;
		}
		if (a == 0 || pow(x, 2) / pow(a, 2) > 1 || cos(x) == 0)
		{
			cout << "Y doesn't exist" << endl;
		}
	}
	}

	system("pause");
	return 0;
}