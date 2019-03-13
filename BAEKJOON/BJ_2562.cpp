#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int input, m = 0, idx = 1;
	for (int i = 1; i <= 9; ++i) {
		cin >> input;
		if (input > m) {
			m = input;
			idx = i;
		}
	}
	cout << m << endl << idx << endl;
	return 0;
}