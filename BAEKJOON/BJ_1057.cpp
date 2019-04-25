#include <iostream>
using namespace std;

int main() {
	int N, A, B, i = 0;
	cin >> N >> A >> B;
	for (--A,--B; A != B; ++i) {
		A /= 2;
		B /= 2;
	}
	cout << i;
	return 0;
}