
#include <iostream>
#include <string>
#pragma once

class dayOfWeek
{
public:
	dayOfWeek();
	void set();
	void set(char* day);
	void get();
	void bsort(dayOfWeek* , int);
	void order(dayOfWeek* day2);

	~dayOfWeek();
private:
	char* day;
};

