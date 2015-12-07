#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <iostream>

int climbStairs(int n) {
	if( n == 0 ) return 1;
	if( n == 1 ) return 1;

	return climbStairs(n-1) + climbStairs(n-2);
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
