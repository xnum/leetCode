#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cstring>
#include <iostream>

using namespace std;

long long climbStairs(int n) {
	if( n == 0 ) return 1;
	if( n == 1 ) return 1;

	return climbStairs(n-1) + climbStairs(n-2);
}

int main() {

	int n;
	cin >> n;
	cout << climbStairs(n);

	return 0;
}
