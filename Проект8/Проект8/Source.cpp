#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, i;
	cout << "Введите целое число А ";
	cin >> a;
	cout << "Введите целое число В ";
	cin >> b;
	for (i = a; i <= b; i++);
	cout << "Число " << i << " Квадрат числа " << i*i << " Куб числа " << i*i*i << endl;
	system("pause");
	return 0;
}
