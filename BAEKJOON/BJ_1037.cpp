#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, A, answer = 1;
	cin >> N;
	if(N > 1) {
		int *num = new int[N];
		for (int i = 0; i < N; ++i) {
			cin >> num[i];
		}
		sort(num, num + N);
		cout << num[0]*num[N-1];
	}
	else {
		cin >> A;
		cout << A * A;
	}
	return 0;
}