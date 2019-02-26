#include <iostream>
using namespace std;

int main() {
	int N, K, order = 0, answer = 0;
	cin >> N >> K;
	for (int i = 1; i <= N; ++i) {
		if (N%i == 0) {
			if (++order == K) {
				answer = i;
				break;
			}
		}
	}
	cout << answer;
	return 0;
}