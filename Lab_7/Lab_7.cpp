
#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	int arr_1[10], arr_2[10], n, temp = 0;
	cout << "Введiть елементи масиву : ";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr_1[i];
	}
	cout << "Введiть число : ";
	cin >> n;
	
	for (int i = 0; i < 10; i++)
	{
		if (arr_1[i] != n)
		{
			arr_2[i - temp] = arr_1[i];
		}
		else
		{
			temp++;
		}
	}
	cout << "Вигляд масиву пiсля стиснення : ";
	for (int i = 0; i < 10-temp; i++)
	{
		cout << arr_2[i] << ' ';
	}
	cout << endl;

	system("pause");

    return 0;
}

