#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	int a = 5; //������ ����������
	int b = 6; //������ ����������
	int c = a; //������ ����������
	a = b; //������ ������� ����������
	b = c; //������ ������� ����������
	cout << "a = " << a << "b = " << b << endl; // ����� ������. 

												//������ ������� ��� ���������� ��� ������ �������

	int x = 9; //������ ����������
	int y = 4; //������ ����������
	x = x - y; //9-4=5
	y = x + y; //5+4=9
	x = y - x; //9-5=4
	cout << "x = " << x << "y = " << y << endl; // ����� ������. 
	system("pause");
	return 0;
}