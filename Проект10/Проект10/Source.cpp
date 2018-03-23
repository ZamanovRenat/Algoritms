//Не смог решить

#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, f, t;
	cout << "Введите целое положительное число N: ";
	cin >> n;

	f = false;
	while (n>0 && f=false)
	{
		t = n % 10;
		if (t%2=1)
		{
			f = true;
		}
	}

	system("pause");
	return 0;
}
