#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //���������� ��������
	double a, b;
	cout << "������� ��� ��� � ����������� ";
	cin >> a;
	cout << "������� ��� ���� � c���������� ";
	cin >> b;
	double c = a / pow((b / 100), 2);//����������� �������� ���
	cout << "������ ����� ������ ���� (���) = " << c << endl; // ����� ������. 
	system("pause");
	return 0;
}