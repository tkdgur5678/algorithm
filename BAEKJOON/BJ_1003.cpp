#include <iostream>
#include <string.h>
using namespace std;

#define MAX_SIZE 41

int zero_data[MAX_SIZE] = { 1,0 }, one_data[MAX_SIZE] = { 0,1 };
int count_zero(int n) {
	int &ret = zero_data[n];
	if (ret != -1) {
		return ret;
	}
	return ret = count_zero(n - 1) + count_zero(n - 2);
}
int count_one(int n) {
	int &ret = one_data[n];
	if (ret != -1) {
		return ret;
	}
	return ret = count_one(n - 1) + count_one(n - 2);
}

int main() {
	int T, N;
	memset(zero_data + 2, -1, sizeof(int) *(MAX_SIZE - 2));
	memset(one_data + 2, -1, sizeof(int) *(MAX_SIZE - 2));
	cin >> T;
	while (T--) {
		cin >> N;
		cout << count_zero(N) << " " << count_one(N) << endl;
	}
	return 0;
}