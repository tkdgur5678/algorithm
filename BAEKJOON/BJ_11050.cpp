#include <iostream>
using namespace std;

int fib(int n) {
	int sum = 1;
	while (n > 0) {
		sum *= n--;
	}
	return sum;
}

int main() {
	int n, k;
	cin >> n >> k;
	if (k < 0) {
		cout << 0;
	}
	else if (k > n) {
		cout << 0;
	}
	else {
		cout << fib(n) / (fib(k)*fib(n - k));
	}
	return 0;
}