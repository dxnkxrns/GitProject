#include "stdafx.h"
#include <iostream>
#include "function.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
	double a, b;
	cout << "Введите a" << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;
	cout << "Введите номер функции" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "Сумма a и b = ";
		cout << Sum(a, b) << endl;
		break;
	case 2:
		cout << "Разность a и b = ";
		cout << Minus(a, b) << endl;
		break;
	case 3:
		cout << "Произведение a и b = ";
		cout << Mul(a, b) << endl;
		break;
	case 4:
		cout << "Частное a/b = ";
		cout << Div(a, b) << endl;
		break;
	
	default:
		cout << "Такой операции нет";
		break;
	}
	system("pause");
	return 0;
}

