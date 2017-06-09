// 10_03.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "dayOfWeek.h"

using namespace std;

int main()
{
	char* s[7] = { "monday",  "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
	dayOfWeek* ptrS[100];

	void bsort(string*, int); // прототип функции

	const int N = 7; // размер массива
	for (int i = 0; i < 7; i++)
	{
		ptrS[i] = new dayOfWeek;
		ptrS[i]->set(s[i]);
	}

	for (int i = 0; i < 7; i++)
	{
		ptrS[i]->get();
	}

	//bsort(arr, N);

	system("pause");
    return 0;
}

///////////////////////////////////////////////////////////
/*void bsort(string* ptr, int n)
{
	void order(int*, int*); // прототип функции

	int j, k; // индексы в нашем массиве
	for (j = 0; j < n - 1; j++) // внешний цикл
		for (k = j + 1; k < n; k++) // внутренний цикл
			order(ptr + j, ptr + k); // сортируем элементы
}


///////////////////////////////////////////////////////////
void order(string* numb1, string* numb2) // сортировка двух чисел
{
		if (*numb1 > *numb2) // если первое число больше, то меняем их местами
		{
			*numb1 ^= *numb2;
			*numb2 ^= *numb1;
			*numb1 ^= *numb2;
		}
}*/
