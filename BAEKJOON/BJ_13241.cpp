#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
	long long r;
	while (b) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

int main() {
	long long A, B;
	cin >> A >> B;
	cout << lcm(A, B);
	return 0;
}