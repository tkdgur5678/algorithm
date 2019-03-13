#include <iostream>
#include <algorithm>
using namespace std;

int stu[201];
int cache[201];

int LIS(int size) {
	int lis = 1;
	for (int i = size-1; i > 0; --i) {
		int m = 0;
		for (int j = i + 1; j <= size; ++j) {
			if (stu[i] < stu[j]) {
				m = max(m, cache[j]);
			}
		}
		cache[i] = m + 1;
		lis = max(lis, cache[i]);
	}
	return lis;
}

int main() {
	int N;
	cin >> N;
	cache[N] = 1;
	for (int i = 1; i <= N; ++i) {
		cin >> stu[i];
	}
	cout << N - LIS(N);
	return 0;
}