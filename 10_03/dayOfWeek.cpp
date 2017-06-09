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
	/*cout << "Input day name: ";
	string tmp;
	cin >> tmp;
	strcpy(day, tmp);
	cout << endl;*/
}

void dayOfWeek::set(char* day)
{
	this->day = day;
}

void dayOfWeek::get()
{
	cout << day << endl;
}


dayOfWeek::~dayOfWeek()
{
}
