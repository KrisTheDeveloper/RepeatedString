// RepeatedString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <math.h>


using namespace std;


long long repeatedString(string s, long long n) {

	size_t count = std::count(s.begin(), s.end(), 'a');
	if (count == s.size())
		return n;

	const char *p = s.c_str();

	long double base = (static_cast<long double>(n) / s.size());
	long long totalACount = static_cast<long long>(base) * count;
	
	long double checkLeftOver = ((static_cast<long long>(base * 100) % 100) /100.0) * s.size();
	
	for (int iter = 0; iter < checkLeftOver; iter++)
	{
		if (p[iter] == 'a')
			totalACount += 1;
	}	
	
	return totalACount;
}

int main()
{
	/* expected: 16481469408*/
	//long long answer = repeatedString("epsxyyflvrrrxzvnoenvpegvuonodjoxfwdmcvwctmekpsnamchznsoxaklzjgrqruyzavshfbmuhdwwmpbkwcuomqhiyvuztwvq", 160);//549382313570);
	//long long answer = repeatedString("epsvwctmekpsnamchznsoxak", 45);
	//long answer = repeatedString("gfcaaaecbg", 547602);
	//int answer = repeatedString("aba", 10);
	//long long answer = repeatedString("aab", 7);
	//long long answer = repeatedString("kmretasscityylpdhuwjirnqimlkcgxubxmsxpypgzxtenweirknjtasxtvxemtwxuarabssvqdnktqadhyktagjxoanknhgilnm", 736778906400);
	//long long answer = repeatedString("babbaabbabaababaaabbbbbbbababbbabbbababaabbbbaaaaabbaababaaabaabbabababaabaabbbababaabbabbbababbaabb", 860622337747);
	long long answer = repeatedString("bcbccacaacbbacabcabccacbccbababbbbabcccbbcbcaccababccbcbcaabbbaabbcaabbbbbbabcbcbbcaccbccaabacbbacbc", 649606239668);
	return 0;
}

