#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int MaxNumber()
{
	setlocale(LC_ALL, "Russian"); //���������� ��������
	int z, x, c, d;
	cout << "������� ������ ����� �����" << endl;
	cin >> z;
	cout << "������� ������ ����� �����" << endl;
	cin >> x;
	cout << "������� ������ ����� �����" << endl;
	cin >> c;
	cout << "������� ��������� ����� �����" << endl;
	cin >> d;
	int max1 = (z>x) ? z : x;
	int max2 = (c>d) ? c : d;
	cout << "������������ ����� = " << ((max1>max2) ? max1 : max2) << endl;
	system("pause");
	return 0;
}