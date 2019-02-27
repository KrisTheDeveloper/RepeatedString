// RepeatedString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>


using namespace std;


long long repeatedString(string s, long long n) {

	size_t count = std::count(s.begin(), s.end(), 'a');
	if (count == s.size())
		return n;


	long double totalACount = 0;
	totalACount = (static_cast<long double>(n) / s.size()) * count;

	if (static_cast<long long>(totalACount) % 2 > 0)
		totalACount += 1;
	
	return totalACount;
}

int main()
{
	//is answer 13?
	//int answer = repeatedString("aababa", 50);
	//long long answer = repeatedString("kmretasscityylpdhuwjirnqimlkcgxubxmsxpypgzxtenweirknjtasxtvxemtwxuarabssvqdnktqadhyktagjxoanknhgilnm", 736778906400);
	return 0;
}

