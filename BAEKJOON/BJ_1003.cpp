#include <iostream>
#include <string.h>
using namespace std;

#define MAX_SIZE 41

int main() {
	int T, N, data[MAX_SIZE][2] = { {1,0},{0,1}, };
	for (int i = 2; i < MAX_SIZE; ++i) {
		data[i][0] = data[i - 1][0] + data[i - 2][0];
		data[i][1] = data[i - 1][1] + data[i - 2][1];
	}
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		printf("%d %d\n",data[N][0],data[N][1]);
	}
	return 0;
}

//int zero_data[MAX_SIZE] = { 1,0 }, one_data[MAX_SIZE] = { 0,1 };
//int count_zero(int n) {
//	int &ret = zero_data[n];
//	if (ret != -1) {
//		return ret;
//	}
//	return ret = count_zero(n - 1) + count_zero(n - 2);
//}
//int count_one(int n) {
//	int &ret = one_data[n];
//	if (ret != -1) {
//		return ret;
//	}
//	return ret = count_one(n - 1) + count_one(n - 2);
//}
//
//int main() {
//	int T, N;
//	memset(zero_data + 2, -1, sizeof(int) *(MAX_SIZE - 2));
//	memset(one_data + 2, -1, sizeof(int) *(MAX_SIZE - 2));
//	cin >> T;
//	while (T--) {
//		cin >> N;
//		cout << count_zero(N) << " " << count_one(N) << endl;
//	}
//	return 0;
//}