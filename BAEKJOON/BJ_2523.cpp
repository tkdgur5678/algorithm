#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = -N + 1; i < N; ++i) {
		for (int j = 0; j < N - abs(i); ++j) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}