#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int floor, score;
	cin >> floor;
	int *dp = new int[floor + 1], *arr = new int[floor + 1];
	for (int i = 0; i < floor; ++i) {
		cin >> arr[i];
	}
	dp[0] = arr[0];
	dp[1] = dp[0]+arr[1];
	dp[2] = max(arr[0]+arr[2],arr[1]+arr[2]);
	for (int i = 3; i < floor; ++i) {
		dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
	}
	cout << dp[floor-1];
	return 0;
}