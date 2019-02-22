#include <iostream>
using namespace std;

int main() {
	int N, empty = 0;
	cin >> N;
	for (int i = 2 * N - 1; i >= 1; i-=2) {
		for (int k = 0; k < empty; ++k) {
			cout << " ";
		}
		for (int j = 0; j < i; ++j) {
			cout << "*";
		}
		empty++;
		cout << endl;
	}
	return 0;
}