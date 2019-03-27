#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#pragma warning(disable:4996)
#define MAX_SIZE 10001
bool prime[MAX_SIZE];

void find_prime(int n) {
	for (int i = 2; i < n; ++i) {
		if (prime[i] == false)
			continue;
		for (int j = i * 2; j < n; j += i) {
			prime[j] = false;
		}
	}
}

int main() {
	int T, n;
	scanf("%d", &T);
	memset(prime, true, sizeof(bool)*MAX_SIZE);
	find_prime(10001);
	while (T--) {
		scanf("%d", &n);
		int mid = n / 2;
		for (int i = 0; i < mid; ++i) {
			if (prime[mid - i] && prime[mid + i]) {
				cout << mid - i << " " << mid + i << "\n";
				break;
			}
		}
	}
	return 0;
}
//vector<int> v;
//
//void find_prime(int n) {
//	for (int i = 2; i < n; ++i) {
//		if (prime[i] == false)
//			continue;
//		for (int j = i*2; j < n; j += i) {
//			prime[j] = false;
//		}
//	}
//	for (int i = 2; i < n; ++i) {
//		if (prime[i])
//			v.push_back(i);
//	}
//}
//
//int main() {
//	int T, n, size;
//	scanf("%d", &T);
//	memset(prime, true, sizeof(bool)*MAX_SIZE);
//	find_prime(10001);
//	size = v.size();
//	while (T--) {
//		scanf("%d", &n);
//		int Min = MAX_SIZE, a, b;
//		for (int i = 0; i < size && v[i] < n; ++i) {
//			for (int j = i; j < size && v[i] + v[j] <= n; ++j) {
//				if(v[i] + v[j] == n) {
//					Min = min(Min, abs(v[i] - v[j]));
//					a = v[i], b = v[j];
//				}
//			}
//		}
//		printf("%d %d\n", a, b);
// 	}
//	return 0;
//}