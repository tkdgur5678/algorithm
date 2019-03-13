#include <iostream>
using namespace std;

int main() {
	int N, div = 2;
	cin >> N;
	while (N > 1) {
		if (N%div == 0) {
			N /= div;
			cout << div << endl;
		}
		else {
			++div;
		}
	}
	return 0;
}