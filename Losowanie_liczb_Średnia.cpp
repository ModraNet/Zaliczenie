

#include "pch.h"
#include <iostream>
using namespace std;

int main()
	{
	setlocale(LC_ALL, "PL-pl");
	int liczby[10], suma = 0;
	double srednia;

	cout << "Losuję 10 liczb całkowitych: " << endl;
	for (int i = 0; i < 10; i++)
		{
		liczby[i] = rand();
		suma = suma + liczby[i];
		cout << liczby[i] << " ";
		}
	cout << endl;
	srednia = suma / 10.0;
	cout << "Suma tych liczb " << suma << ", a średnia: " << srednia << endl;
	system("pause");
	return 0;
	}