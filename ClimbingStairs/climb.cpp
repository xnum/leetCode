#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

long long climbStairs(int n) {
	if( n == 0 ) return 0;
	if( n == 1 ) return 1;

	long long table[n+1] ;
	memset( table , 0 , sizeof(long) * (n+1) );
	table[0] = 1;
	table[1] = 1;
	for( int i = 2 ; i <= n ; ++i ) {
		table[i] = table[i-1] + table[i-2];
	}

	return table[n];
}

int main() {
	int n;
	cin >> n;
	cout << climbStairs(n);

	return 0;
}
