#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <iostream>

using namespace std;

long long climbStairs(int n) {
	if( n == 0 ) return 1;
	if( n == 1 ) return 1;

	long long old1 = 1;
	long long old2 = 1;
	long long res;

	for( int i = 2 ; i <= n ; ++i ) {
		res = old1 + old2;
		old2 = old1;
		old1 = res;
	}

	return res;
}

int main() {
	int n;
	cin >> n;
	cout << climbStairs(n);

	return 0;
}
