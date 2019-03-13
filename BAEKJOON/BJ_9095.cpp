#include <iostream>
using namespace std;

int cache[11] = { 1,1,2,4, };

int OneTwoThree(int n) {
	int &ret = cache[n];
	if (ret != 0) return ret;
	ret = OneTwoThree(n - 1) + OneTwoThree(n - 2) + OneTwoThree(n - 3);
	return ret;
}

int main() {
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		cout << OneTwoThree(n) << endl;
	}
	return 0;
}