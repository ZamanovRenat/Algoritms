#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int MaxNumber()
{
	setlocale(LC_ALL, "Russian"); //Подключаем кирилицу
	int z, x, c, d;
	cout << "Введите первое целое число" << endl;
	cin >> z;
	cout << "Введите второе целое число" << endl;
	cin >> x;
	cout << "Введите третье целое число" << endl;
	cin >> c;
	cout << "Введите четвортое целое число" << endl;
	cin >> d;
	int max1 = (z>x) ? z : x;
	int max2 = (c>d) ? c : d;
	cout << "Максимальное число = " << ((max1>max2) ? max1 : max2) << endl;
	system("pause");
	return 0;
}