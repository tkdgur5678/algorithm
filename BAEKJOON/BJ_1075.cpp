#include <iostream>
using namespace std;

int main() {
	int N, F, answer = 0;
	cin >> N >> F;
	N /= 100;
	N *= 100;
	while (N%F != 0) {
		N++;
		answer++;
	}
	if (answer < 10) {
		cout << 0 << answer;
	}
	else
		cout << answer;
	return 0;
}