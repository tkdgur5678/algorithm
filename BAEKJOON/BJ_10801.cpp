#include <iostream>
using namespace std;

int main() {
	int result = 0, input, card[10];
	for (int i = 0; i < 10; ++i) {
		cin >> card[i];
	}
	for (int i = 0; i < 10; ++i) {
		cin >> input;
		if (card[i] > input) {
			result++;
		}
		else if (card[i] < input) {
			result--;
		}
	}
	if (result > 0) {
		cout << 'A';
	}
	else if (result < 0) {
		cout << 'B';
	}
	else {
		cout << 'D';
	}
	return 0;
}