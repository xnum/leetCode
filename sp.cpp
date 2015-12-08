#include <cstdio>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <deque>

using namespace std;

string concatPath(deque<string> &paths) {
	string result;

	deque<string>::iterator it = paths.begin();
	for( ; it != paths.end() ; ++it )
		result += "/" + *it;

	return result == "" ? "/" : result;
}

string simplifyPath(string path) {
	deque<string> result;

	replace( path.begin(), path.end(), '/', '\n');

	stringstream ss(path);
	string input;
	while( ss >> input ) 
	{
		if( input == ".." )
		{
			if( !result.empty() )
				result.pop_back();
		}
		else if( input != "" && input != "." )
		{
			result.push_back(input);
		}
	}

	return concatPath(result);
}

int main() {
	cout << simplifyPath("/..") << endl;
	return 0;
}
