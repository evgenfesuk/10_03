// 10_03.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "dayOfWeek.h"

using namespace std;

int main()
{
	char* s[7] = { "xmonday",  "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };
	dayOfWeek* ptrS[100];
	const int N = 7;

	for (int i = 0; i < 7; i++)
	{
		ptrS[i] = new dayOfWeek;
		ptrS[i]->set(s[i]);
	}

	for (int i = 0; i < 7; i++)
	{
		ptrS[i]->get();
	}

	for (int i = 0; i < 7; i++)
	{
		ptrS[i]->bsort(ptrS[i] ,N);
	}
	for (int i = 0; i < 7; i++)
	{
		ptrS[i]->get();
	}

	system("pause");
    return 0;
}

