#include <iostream>
using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int m = max(a, max(b, c));
	int n = a + b + c - m;
	if (n > m) {
		cout << n + m;
	}
	else {
		cout << (n) * 2 - 1;
	}
	return 0;
}