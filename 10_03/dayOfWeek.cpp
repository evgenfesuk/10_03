#include "stdafx.h"
#include "dayOfWeek.h"

#include <iostream>
#include <string>

using namespace std;

dayOfWeek::dayOfWeek()
{
}

void dayOfWeek::set()
{
	cout << "Input day name: ";
	cin >> day;
	cout << endl;
}

void dayOfWeek::set(char* day)
{
	this->day = day;
}

void dayOfWeek::get()
{
	cout << day << endl;
}

void dayOfWeek::bsort(dayOfWeek* day2, int n)
{
	int j, k; // ������� � ����� �������
	for (j = 0; j < n - 1; j++) // ������� ����
		for (k = j + 1; k < n; k++) // ���������� ����
			this->order(day2); // ��������� ��������*/
}

void dayOfWeek::order(dayOfWeek* day2)
{
	if (stricmp(this->day, day2->day) > 0) // ���� ������ ����� ������, �� ������ �� �������
	{
		char* tmp;

		tmp = this->day;
		this->day = day2->day;
		day2->day = tmp;
	}
}


dayOfWeek::~dayOfWeek()
{
}
