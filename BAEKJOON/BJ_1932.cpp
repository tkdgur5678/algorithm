#include <iostream>
using namespace std;

int input[501][501];
int cache[501][501];

int max(int a, int b) {
	return a > b ? a : b;
}

int findMax(int n) {
	int i = n - 2;
	while (i >= 0) {
		for (int j = 0; j < i + 1; ++j) {
			cache[i][j] = input[i][j] + max(cache[i + 1][j], cache[i + 1][j + 1]);
		}
		--i;
	}
	return cache[0][0];
}

int main() {
	int n;
	cin >> n;
	//input
	memset(cache, -1, sizeof(cache));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j <= i; ++j) {
			cin >> input[i][j];
		}
	}
	for (int i = 0; i < n; ++i) {
		cache[n - 1][i] = input[n-1][i];
	}
	cout << findMax(n);
	return 0;
}