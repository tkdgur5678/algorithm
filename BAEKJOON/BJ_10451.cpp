#include <iostream>
using namespace std;

int Sequence[1001];

int findCycle(int N) {
	int count = 0;
	bool *check = new bool[N+1];
	memset(check, false, sizeof(bool)*(N + 1));
	for (int i = 1; i <= N; ++i) {
		int cycleNum = 0;
		if (check[i] == false) {
			check[i] = true;
			cycleNum = i;
			int j = i;
			while (cycleNum != Sequence[j]) {
				j = Sequence[j];
				check[j] = true;
			}
			count++;
		}
	}
	return count;
}

int main() {
	int T, N;
	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 1; i <= N; ++i) {
			cin >> Sequence[i];
		}
		cout << findCycle(N) << endl;
	}
	return 0;
}
