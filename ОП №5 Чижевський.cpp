

#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char x;
	cout << "Введіть букву ноти" << endl;
	cin >> x;

	switch (x)
	{
	case 'C': cout << "До\n"; break;
	case 'D': cout << "Ре\n"; break;
	case 'E': cout << "Мі\n"; break;
	case 'F': cout << "Фа\n"; break;
	case 'G': cout << "Соль\n"; break;
	case 'A': cout << "Ля\n"; break;
	case 'H': cout << "Сі\n"; break;
	case '#': cout << "Работа с ЛР-5 ОПИ" << endl; break;
	default: cout << "Такої ноти не існує" << endl; break;
	}
	system("pause");
	return 0;
}