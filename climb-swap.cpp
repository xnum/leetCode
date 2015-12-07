#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <iostream>

int climbStairs(int n) {
	if( n == 0 ) return 1;
	if( n == 1 ) return 1;

	int old1 = 1;
	int old2 = 1;
	int res;

	for( int i = 2 ; i <= n ; ++i ) {
		res = old1 + old2;
		old2 = old1;
		old1 = res;
	}

	return res;
}

int main() {
	assert(1 == climbStairs(0));
	assert(1 == climbStairs(1));
	assert(2 == climbStairs(2));
	assert(3 == climbStairs(3));
	assert(5 == climbStairs(4));
	assert(8 == climbStairs(5));

	return 0;
}
