#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int x, a, b, m;
	m = 100; // ������� ������������������ 
	b = 3;
	a = 2;
	x = 1;
	int i;
	int modulus = 100;

	for (i = 0; i < modulus; i++)
	{
		x = (a * x + b) % m;
		cout << "��������� ����� = " << x << endl; // ����� ������.	
	}
	system("pause");
	return 0;
}
