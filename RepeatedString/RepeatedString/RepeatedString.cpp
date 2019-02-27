// RepeatedString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


using namespace std;


long repeatedString(string s, long n) {

	string temp = "";

	for (int iter = 0; iter < n; iter++)
	{
		temp += s;
	}

	cout << temp;

	return 10000;
}

int main()
{
	float value = (10 / 3) * 2;
	float value2 = static_cast<float>(10) / 3;
	repeatedString("aba", 7);
	return 0;
}

