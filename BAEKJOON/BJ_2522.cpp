#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = -N + 1; i < N; ++i) {
		int size = abs(i);
		for (int j = 0; j < N; ++j) {
			if(j < size) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;
}