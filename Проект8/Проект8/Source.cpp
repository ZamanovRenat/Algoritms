#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, i;
	cout << "������� ����� ����� � ";
	cin >> a;
	cout << "������� ����� ����� � ";
	cin >> b;
	for (i = a; i <= b; i++);
	cout << "����� " << i << " ������� ����� " << i*i << " ��� ����� " << i*i*i << endl;
	system("pause");
	return 0;
}
