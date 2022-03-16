#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	char z;
	cin >>x>>y>>z;
	switch (z) {

	case'+':
	{
		cout<<"результат сложения ="<<x + y;
		break;
	}
	case'-':
	{
		cout<<"результат вычитания ="<<x - y;
		break;
	}
	case '*':
	{
		cout<<"результат умножения ="<<x * y;
		break;
	}
	case '/':
	{
		if (y == 0) {
			cout<<"на ноль делить нельзя";
		}
		else
		{
			cout<<"результат деления = "<<x / y;
		}
		break;
	}

	default:
	{
		cout<<"такую операцию совершить невозможно"<<x;
		break;
	}

	}
	cin.ignore();
	cin.ignore();
	return 0;
}




