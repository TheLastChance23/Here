#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A, B, C;

	cout << "������ A:" << endl;
	cin >> A;

	cout << "������ B:" <<endl;
	cin >> B;

	cout << "������ C:" << endl;
	cin >> C;

	(A > 0 && B > 0 || A > 0 && C > 0 || B > 0 && C > 0) ?
		cout << "True" <<endl : cout << "False" << endl;
	system("pause");
	return 0;
}

�����������