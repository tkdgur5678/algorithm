#include <iostream>
using namespace std;

int main() {
	int N, A, B, sum = 0;
	cin >> N;
	while (N--) {
		cin >> A >> B;
		sum += B % A;
	}
	cout << sum;
	return 0;
}