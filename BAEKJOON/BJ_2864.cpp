#include <iostream>
using namespace std;

int main() {
	int A, B, min, max;
	cin >> A >> B;
	min = A + B;
	max = A + B;
	int digit = 1;
	while (A) {
		if (A % 10 == 5) {
			max += digit;
		}
		else if (A % 10 == 6) {
			min -= digit;
		}
		A /= 10;
		digit *= 10;
	}
	digit = 1;
	while (B) {
		if (B % 10 == 5) {
			max += digit;
		}
		else if (B % 10 == 6) {
			min -= digit;
		}
		B /= 10;
		digit *= 10;
	}
	cout << min << " " << max;
	return 0;
}