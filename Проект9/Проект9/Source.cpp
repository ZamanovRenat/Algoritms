// Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления.
#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, chastnoe, ostatok;

	cout << "Введите Ваш целое положительное число N ";
	cin >> n;
	cout << "Введите Ваш целое положительное число K ";
	cin >> k;
	chastnoe = 0;
	while (n>=k)
	{
		chastnoe++;
		n = -k;
	}
	ostatok = n;

	cout << "Частное от деления нацело = "  << chastnoe << endl; 
	cout << "Остаток от деления нацело = "  << ostatok << endl; 
	system("pause");
	return 0;
}
