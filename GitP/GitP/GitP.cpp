#include "stdafx.h"
#include <iostream>
#include "function.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
	double a, b;
	cout << "������� a: " << endl;
	cin >> a;
	cout << "������� b: " << endl;
	cin >> b;
	cout << "������� ����� �������: " << endl;
	cout << "1. ������� �����" << endl;
	cout << "2. ������� ��������" << endl;
	cout << "3. ������� ������������" << endl;
	cout << "4. ������� �������" << endl;
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
		cout << "����� �������� ���";
		break;
	}
	system("pause");
	return 0;
}

