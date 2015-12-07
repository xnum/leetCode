#include <cstdio>
#include <cassert>

#include <iostream>
#include <string>

using std::string;

string intToRoman(int num) {
	if( num <= 0 || num >= 4000 ) return "";	

	string res = "";

	while( num >= 1000 ) {
		num -= 1000;
		res += "M";
	}

	string hundred_digit[] = {
		"" ,		//0
		"C" ,
		"CC" ,
		"CCC" , 
		"CD" ,	//4
		"D" ,
		"DC" ,	//6
		"DCC" ,
		"DCCC" ,
		"CM"		//9
	};

	string ten_digit[] = {
		"",			//0
		"X",
		"XX",
		"XXX",
		"XL",
		"L",
		"LX",
		"LXX",
		"LXXX",
		"XC"		//9
	};

	string digit[] = {
		"",		//0
		"I",	
		"II",
		"III",
		"IV",
		"V",
		"VI",
		"VII",
		"VIII",
		"IX"
	};

	int hund = num / 100;
	int ten = (num - hund*100) / 10;
	int d = num - hund*100 - ten*10;

	return res + hundred_digit[hund] + ten_digit[ten] + digit[d];
}

int tester()
{
	assert("I" == intToRoman(1));
	assert("VIII" == intToRoman(8));
	assert("XIV" == intToRoman(14));
	assert("XL" == intToRoman(40));
	assert("XCIX" == intToRoman(99));
	assert("CCLXVII" == intToRoman(267));
	assert("MMMCCLXXXI" == intToRoman(3281));
	assert("DCCXVII" == intToRoman(717));

	return 1;
}

int main()
{
	if( tester() ) puts("Ok!");

	return 0;
}
