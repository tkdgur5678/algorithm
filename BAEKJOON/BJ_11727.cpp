#include <iostream>
using namespace std;

int cache[1001] = { 0,1,3,5, };

int tiling(int n) {
	int &ret = cache[n];
	if (ret != 0) return ret;
	return ret = (tiling(n - 1) + tiling(n - 2) * 2) % 10007;
}

int main() {
	int n;
	cin >> n;
	cout << tiling(n);
	return 0;
}