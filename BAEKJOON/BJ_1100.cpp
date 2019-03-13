#include <iostream>
using namespace std;

int main() {
	int count = 0;
	char input;
	for (int y = 0; y < 8; ++y) {
		for (int x = 0; x < 8; ++x) {
			cin >> input;
			if (y % 2 == 0 && x % 2 == 0 && input == 'F') {
				count++;
			}
			else if(y % 2 == 1 && x % 2 == 1 && input == 'F') {
				count++;
			}
		}
	}
	cout << count;
	return 0;
}