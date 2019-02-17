#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


int main() {
	int N, sum = 0, input;
	cin >> N;
	vector<int> A, B;
	for (int i = 0; i < N; ++i) {
		cin >> input;
		A.push_back(input);
	}
	for (int i = 0; i < N; ++i) {
		cin >> input;
		B.push_back(input);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(),greater<int>());
	for (int i = 0; i < N; ++i)
		sum += A[i] * B[i];
	cout << sum;
	return 0;
}