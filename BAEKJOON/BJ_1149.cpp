#include <iostream>
#include <algorithm>
using namespace std;

int input[1001][3];
int cache[1001][3];

int colorize(int N) {
	int i = 1;
	while (i < N) {
		cache[i][0] = input[i][0] + min(cache[i-1][1], cache[i-1][2]);	//R
		cache[i][1] = input[i][1] + min(cache[i-1][0], cache[i-1][2]);	//G
		cache[i][2] = input[i][2] + min(cache[i-1][0], cache[i-1][1]);	//B
		++i;
	}
	return min(cache[N - 1][0], min(cache[N - 1][1], cache[N - 1][2]));
}

int main() {
	int N;
	cin >> N;
	memset(cache, -1, sizeof(cache));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < 3; ++j)
			cin >> input[i][j];
	}
	for (int j = 0; j < 3; ++j)
		cache[0][j] = input[0][j];
	cout << colorize(N);
	return 0;
}