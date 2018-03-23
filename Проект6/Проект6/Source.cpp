#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите возраст человека от 1 до 150 лет ";
	cin >> a;

	if (a < 151 && a > 0)
	{
		int b = a % 10;
		if (b == 1)
		{
			cout << "Возраст человека " << a << " год" << endl;
		}
		else if (b < 5 && b > 1) 
		{
			cout << "Возраст человека " << a << " года" << endl;
		}
		else
		{
			cout << "Возраст человека " << a << " лет" << endl;
		}
	}
	else if (a < 15 && a > 10)
	{
		cout << "Возраст человека " << a << " лет" << endl;
	}
	else 
	{
		cout << "Введены не правильные данные" << endl; 
	}
	
	system("pause");
	return 0;
}
