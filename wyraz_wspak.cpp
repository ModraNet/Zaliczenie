﻿#include "pch.h"
#include <iostream>

int main()
{
	using namespace std;

	char cwyraz[21];
	unsigned int literki = 0;
	cout << "Podaj wyraz (max 20 liter, '/' konczy): ";

	for (int i = 0; i < 20; i++)
	{
		cin >> cwyraz[i];
		if (cwyraz[i] == '/')
		{
			cwyraz[i] == -52;
			literki = i;
			break;
		}
		literki = i + 1;
	}
	cout << literki << endl << endl;

	for (int i = literki - 1; i >= 0; i--)
	{
		cout << cwyraz[i];
	}cout << endl << endl;

	system("pause");
	return 0;
}