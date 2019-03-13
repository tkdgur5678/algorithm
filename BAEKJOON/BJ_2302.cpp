#include <iostream>
using namespace std;

int main() {
	int cache[41] = { 1, 1, 2, };
	int N, M, vip, temp = 0, result = 1;
	cin >> N >> M;
	for (int i = 3; i <= N; ++i) {
		cache[i] = cache[i - 1] + cache[i - 2];
	}
	while (M--) {
		cin >> vip;
		result *= cache[vip - temp - 1];
		temp = vip;
	}
	result *= cache[N - temp];
	cout << result;
	return 0;
}