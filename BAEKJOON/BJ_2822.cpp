#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int question[8], temp[8], sum = 0, index[5];
	for (int i = 0; i < 8; ++i) {
		cin >> question[i];
	}
	memcpy(temp, question, sizeof(temp));
	sort(temp, temp + 8);
	for (int i = 3; i < 8; ++i) {
		sum += temp[i];
		for (int j = 0; j < 8; ++j) {
			if (question[j] == temp[i]) {
				index[i - 3] = j;
			}
		}
	}
	sort(index, index + 5);
	cout << sum << endl;
	for (int i = 0; i < 5; ++i) {
		cout << index[i] + 1 << " ";
	}
	return 0;
}