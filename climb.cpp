#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

int climbStairs(int n) {
	if( n == 0 ) return 0;
	if( n == 1 ) return 1;

	int table[n+1] ;
	memset( table , 0 , sizeof(int) * (n+1) );
	table[0] = 1;
	table[1] = 1;
	for( int i = 2 ; i <= n ; ++i ) {
		table[i] = table[i-1] + table[i-2];
	}

	return table[n];
}

int main() {
	for( int i = 0 ; i < 10 ; ++i ) {
		std::cout << climbStairs(i) << std::endl;
	}

	return 0;
}
