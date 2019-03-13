#include <iostream>
using namespace std;

int main() {
	unsigned long long N, M, sum = 1, num;
	cin >> N >> M;
	while (N--) {
		cin >> num;
		num %= M;
		sum *= num;
		sum %= M;
	}
	cout << sum % M;
	return 0;
}