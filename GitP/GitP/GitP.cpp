#include "stdafx.h"
#include <iostream>
#include "function.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
	double a, b;
	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Введите номер функции: " << endl;
	cout << "1. Функция суммы" << endl;
	cout << "2. Функция разности" << endl;
	cout << "3. Функция произведения" << endl;
	cout << "4. Функция частное" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "A+B = ";
		cout << Sum(a, b) << endl;
		break;
	case 2:
		cout << "A-B = ";
		cout << Minus(a, b) << endl;
		break;
	case 3:
		cout << "A*B = ";
		cout << Mul(a, b) << endl;
		break;
	case 4:
		cout << "A/B = ";
		cout << Div(a, b) << endl;
		break;
	
	default:
		cout << "Такой операции нет";
		break;
	}
	system("pause");
	return 0;
}

