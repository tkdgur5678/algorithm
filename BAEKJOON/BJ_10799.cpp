#include <iostream>
#include <string>
using namespace std;

int main() {
	string input;
	int level = 0;
	bool check = false;
	int sum = 0;
	cin >> input;
	for(int i=0; i<input.size(); ++i) {
		if( input[i] == '(' ) {
			++level;
			check = true;
		}
		else if(check) {
			sum += --level;
			check = false;
		}
		else {
			++sum;
			--level;
		}
	}
	cout << sum;
	return 0;
}
