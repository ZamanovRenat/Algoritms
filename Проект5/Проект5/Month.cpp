#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //���������� ��������
	int a;
	cout << "������� ����� ������: ";
	cin >> a;
	switch (a)
	{
		case 1:
			cout << "������ - ������ ����� \n";
			break;	
		case 2:
			cout << "������� - ������ ����� \n";
			break;	
		case 3:
			cout << "���� - �������� ����� \n";
			break;	
		case 4:
			cout << "������ - �������� ����� \n";
			break;	
		case 5:
			cout << "��� - �������� ����� \n";
			break;	
		case 6:
			cout << "���� - ������ ����� \n";
			break;	
		case 7:
			cout << "���� - ������ ����� \n";
			break;
		case 8:
			cout << "������ - ������ ����� \n";
			break;
		case 9:
			cout << "�������� - ������� ����� \n";
			break;
		case 10:
			cout << "������� - ������� ����� \n";
			break;
		case 11:
			cout << "������ - ������� ����� \n";
			break;
		case 12:
			cout << "������� - ������ ����� \n";
			break;
		default:
			cout << "�� ����� �� ���������� ������\n";
	}
	system("pause");
	return 0;
}