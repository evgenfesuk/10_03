// 10_03.cpp: ���������� ����� ����� ��� ����������� ����������.
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

	void bsort(string*, int); // �������� �������

	const int N = 7; // ������ �������
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
	void order(int*, int*); // �������� �������

	int j, k; // ������� � ����� �������
	for (j = 0; j < n - 1; j++) // ������� ����
		for (k = j + 1; k < n; k++) // ���������� ����
			order(ptr + j, ptr + k); // ��������� ��������
}


///////////////////////////////////////////////////////////
void order(string* numb1, string* numb2) // ���������� ���� �����
{
		if (*numb1 > *numb2) // ���� ������ ����� ������, �� ������ �� �������
		{
			*numb1 ^= *numb2;
			*numb2 ^= *numb1;
			*numb1 ^= *numb2;
		}
}*/
