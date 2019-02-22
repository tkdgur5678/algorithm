#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = -N + 1; i < N; ++i) {
		int empty = abs(i);
		while(empty-- > 0) {
			cout << ' ';
		}
		int star = N - abs(i);
		for (int j = 0; j < star*2-1; ++j) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}