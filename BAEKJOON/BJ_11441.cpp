#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int N, M, i, j, sum;
	scanf("%d", &N);
	int *arr = new int[N+1];
	arr[0] = 0;
	for (int idx = 1; idx <= N; ++idx) {
		scanf("%d", arr + idx);
		arr[idx] += arr[idx - 1];
	}
	scanf("%d", &M);
	for (int idx = 0; idx < M; ++idx) {
		scanf("%d %d", &i, &j);
		sum = arr[j] - arr[i - 1];
		printf("%d\n", sum);
	}
	return 0;
}