#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > generateMatrix(int n) {
	vector<vector<int> > M( n , vector<int>( n , 0 ) );

	int direction = 0;
	int i = 0, j = 0;

	for( int val = 1 ; val <= n * n ; ++val ) {
			M[i][j] = val;
			if( val == n * n )break;
	
RESTART:
			if( direction == 0 ) // Right
			{
				if( j+1 < n && M[i][j+1] == 0 ) // writable and still clear
					j++;
				else
					direction++;
			}

			if( direction == 1 ) // Down
			{
				if( i+1 < n && M[i+1][j] == 0 )
					i++;
				else
					direction++;
			}

			if( direction == 2 ) // Left
			{
				if( j-1 >= 0 && M[i][j-1] == 0 )
					j--;
				else
					direction++;
			}

			if( direction == 3 ) // Up
			{
				if( i-1 >= 0 && M[i-1][j] == 0 )
					i--;
				else
				{
					direction = 0;
					goto RESTART;
				}
			}
	}

	return M;
}

void caller(int n) {
	vector<vector<int> > res = generateMatrix(n);

	for( int i = 0 ; i < res.size() ; ++i ) {
		for( int j = 0 ; j < res[i].size() ; ++j ) {
			cout << res[i][j] << ' ';
		}
		cout << endl;
	}
}

int main() {
	caller(3);
	caller(4);
	caller(5);
	return 0;
}
