#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� ������� �������� �� 1 �� 150 ��� ";
	cin >> a;

	if (a < 151 && a > 0)
	{
		int b = a % 10;
		if (b == 1)
		{
			cout << "������� �������� " << a << " ���" << endl;
		}
		else if (b < 5 && b > 1) 
		{
			cout << "������� �������� " << a << " ����" << endl;
		}
		else
		{
			cout << "������� �������� " << a << " ���" << endl;
		}
	}
	else if (a < 15 && a > 10)
	{
		cout << "������� �������� " << a << " ���" << endl;
	}
	else 
	{
		cout << "������� �� ���������� ������" << endl; 
	}
	
	system("pause");
	return 0;
}
