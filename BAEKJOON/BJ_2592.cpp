#include <iostream>
using namespace std;

int main() {
	int num[100] = { 0, }, input, sum = 0, fnum = 0;
	for (int i = 0; i < 10; ++i) {
		cin >> input;
		num[input/10]++;
		sum += input;
	}
	for (int i = 0; i < 100; ++i) {
		if (num[i] > num[fnum]) {
			fnum = i;
		}
	}
	cout << sum / 10 << endl;
	cout << fnum * 10 << endl;
	return 0;
}