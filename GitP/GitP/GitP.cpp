#include "stdafx.h"
#include <iostream>
#include "function.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
	double a, b;
	cout << "������� a" << endl;
	cin >> a;
	cout << "������� b" << endl;
	cin >> b;
	cout << "������� ����� �������" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "����� a � b = ";
		cout << Sum(a, b) << endl;
		break;
	case 2:
		cout << "�������� a � b = ";
		cout << Minus(a, b) << endl;
		break;
	case 3:
		cout << "������������ a � b = ";
		cout << Mul(a, b) << endl;
		break;
	case 4:
		cout << "������� a/b = ";
		cout << Div(a, b) << endl;
		break;
	
	default:
		cout << "����� �������� ���";
		break;
	}
	system("pause");
	return 0;
}

