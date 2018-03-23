#include <iostream> 
#include <stdio.h> 
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); //ѕодключаем кирилицу
	int a;
	cout << "¬ведите номер мес€ца: ";
	cin >> a;
	switch (a)
	{
		case 1:
			cout << "январь - зимний мес€ц \n";
			break;	
		case 2:
			cout << "‘евраль - зимний мес€ц \n";
			break;	
		case 3:
			cout << "ћарт - весенний мес€ц \n";
			break;	
		case 4:
			cout << "јпрель - весенний мес€ц \n";
			break;	
		case 5:
			cout << "ћай - весенний мес€ц \n";
			break;	
		case 6:
			cout << "»юнь - летний мес€ц \n";
			break;	
		case 7:
			cout << "»юль - летний мес€ц \n";
			break;
		case 8:
			cout << "јвгуст - летний мес€ц \n";
			break;
		case 9:
			cout << "—ент€брь - осенний мес€ц \n";
			break;
		case 10:
			cout << "ќкт€брь - осенний мес€ц \n";
			break;
		case 11:
			cout << "Ќо€брь - осенний мес€ц \n";
			break;
		case 12:
			cout << "ƒекабрь - зимний мес€ц \n";
			break;
		default:
			cout << "¬ы ввели не правильные данные\n";
	}
	system("pause");
	return 0;
}