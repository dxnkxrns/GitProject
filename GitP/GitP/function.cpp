#include "stdafx.h"
#include "iostream"
#include "function.h"
double Sum(double a, double b)
{
	return a + b;
}
double Minus(double a, double b)
{
	return a - b;
}
double Mul(double a, double b)
{
	return a * b;
}
double Div(double a, double b)
{
	if (b == 0)
	{
		std :: cout << "Div 0 error :";
		return false;
	}
	else
		return a / b;
}