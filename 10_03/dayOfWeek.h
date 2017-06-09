
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

	~dayOfWeek();
private:
	char* day;
};

