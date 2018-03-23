#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //Подключаем кирилицу
	double a, b;
	cout << "Введите Ваш вес в килограммах ";
	cin >> a;
	cout << "Введите Ваш рост в cантиметрах ";
	cin >> b;
	double c = a / pow((b / 100), 2);//Высчитываем значение ИМТ
	cout << "Индекс массы вашего тела (ИМТ) = " << c << endl; // вывод ответа. 
	system("pause");
	return 0;
}