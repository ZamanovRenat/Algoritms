#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //���������� ��������
	int x, y, z, a;
	cout << "������� ������ ����� �����" << endl;
	cin >> x;
	cout << "������� ������ ����� �����" << endl;
	cin >> y;
	cout << "������� ������ ����� �����" << endl;
	cin >> z;
	if (x > y)
	{
		if (x > z)
		{
			a = x;
		}
		else
		{
			if (y > z)
			{
				a = y;
			}
			else
			{
				a = z;
			}
		}
	}

	cout << "������������ ����� = " << a << endl;
	system("pause");
	return 0;
}