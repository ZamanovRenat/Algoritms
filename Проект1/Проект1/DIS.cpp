#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int dis()
{
	setlocale(LC_ALL, "Russian"); //���������� ��������
	double a, b, c;
	cout << "������� ����������� �: ";
	cin >> a;
	cout << "������� ����������� b: ";
	cin >> b;
	cout << "������� ����������� c: ";
	cin >> c;
	double x1, x2;
	x1 = (-b - sqrt(pow(b, 2) - 4 * a*c)) / 2 * a;
	x2 = (-b + sqrt(pow(b, 2) - 4 * a*c)) / 2 * a;
	cout << "����� ����������� ��������� " << a << "x^2+" << b << "x+" << c << "=0: \n"  "x1=" << x1 << " x2 =" << x2 << ", \n" << endl;
	system("pause");
	return 0;
}