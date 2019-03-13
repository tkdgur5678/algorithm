#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int r;
	while (b) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int N;
	int fRing, nRing;
	cin >> N >> fRing;
	for (int i = 0; i < N - 1; ++i) {
		cin >> nRing;
		int gcdNum = gcd(fRing, nRing);
		cout << fRing / gcdNum << "/" << nRing / gcdNum << endl;
	}
	return 0;
}