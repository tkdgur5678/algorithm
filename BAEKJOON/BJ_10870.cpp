#include <iostream>
using namespace std;

int main() {
	int fib[21] = { 0,1 }, n;
	cin >> n;
	for (int i = 2; i <= n; ++i) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << fib[n];
	return 0;
}