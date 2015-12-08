#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string convertToTitle(int n) {
	string res;
	while( n > 0 ) {
		int digit = --n % 26;
		n /= 26;
		res += (char)('A' + digit);
	}

	reverse(res.begin() ,res.end());

	return res;
}

int main() {
	int n;
	while( cin >> n )
		cout << convertToTitle(n) << endl;
	return 0;
}
