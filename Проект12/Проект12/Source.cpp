#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //Подключаем кирилицу
	int x, y, z, a;
	cout << "Введите первое целое число" << endl;
	cin >> x;
	cout << "Введите второе целое число" << endl;
	cin >> y;
	cout << "Введите третье целое число" << endl;
	cin >> z;
	if (x > y)
	{
		if (x > z)
		{
			a = x;
		}
		else
		{
			if (y > z)
			{
				a = y;
			}
			else
			{
				a = z;
			}
		}
	}

	cout << "Максимальное число = " << a << endl;
	system("pause");
	return 0;
}