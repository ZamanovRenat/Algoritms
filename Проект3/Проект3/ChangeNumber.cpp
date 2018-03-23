#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	int a = 5; //Первая переменная
	int b = 6; //Вторая переменная
	int c = a; //Третья переменная
	a = b; //Меняем местами переменные
	b = c; //Меняем местами переменные
	cout << "a = " << a << "b = " << b << endl; // вывод ответа. 

												//Меняем местами две переменные без помощи третьей

	int x = 9; //Первая переменная
	int y = 4; //Вторая переменная
	x = x - y; //9-4=5
	y = x + y; //5+4=9
	x = y - x; //9-5=4
	cout << "x = " << x << "y = " << y << endl; // вывод ответа. 
	system("pause");
	return 0;
}