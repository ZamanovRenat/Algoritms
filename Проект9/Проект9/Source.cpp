// ���� ����� ������������� ����� N � K. ��������� ������ �������� �������� � ���������, ����� ������� �� ������� ������ N �� K, � ����� ������� �� ����� �������.
#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, chastnoe, ostatok;

	cout << "������� ��� ����� ������������� ����� N ";
	cin >> n;
	cout << "������� ��� ����� ������������� ����� K ";
	cin >> k;
	chastnoe = 0;
	while (n>=k)
	{
		chastnoe++;
		n = -k;
	}
	ostatok = n;

	cout << "������� �� ������� ������ = "  << chastnoe << endl; 
	cout << "������� �� ������� ������ = "  << ostatok << endl; 
	system("pause");
	return 0;
}
