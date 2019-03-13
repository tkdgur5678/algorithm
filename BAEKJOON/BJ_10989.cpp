#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_NUM 10000000

int temp[MAX_NUM];

void counting_sort(int list[], int size, int M) {
	//정렬할 제일 큰 수의 개수만큼 0으로 초기화
	for (int i = 0; i < M; ++i) {
		temp[i] = 0;
	}
	//처음부터 개수를 세어 저장
	for (int i = 0; i < size; ++i) {
		++temp[list[i]];
	}
	//개수를 저장한것을 누적합으로 바꿔줌
	for (int i = 1; i < size; ++i) {
		temp[i] += temp[i - 1];
	}
	//누적합을 바탕으로 숫자를 결과에 넣어줍니다.
	int *sorted = new int[size];
	int j = 0;
	for (int i = size-1 ; i >= 0; --i) {
		cout << list[i];
		sorted[temp[list[i]]--] = list[i];
	}
	memcpy(list, sorted, sizeof(list));
}

int main() {
	//input
	int N=0,M=-1;
	scanf_s("%d", &N, sizeof(N));
	int *list = new int[MAX_NUM];
	for (int i = 0; i < N; ++i) {
		scanf_s("%d", &list[i], sizeof(list[i]));
		M = max(M, list[i]);
	}
	//process
	counting_sort(list, N, M);
	//output
	for (int i = 0; i < N; ++i) {
		printf("%d\n", list[i]);
	}
	getchar(); getchar(); getchar();
	return 0;
}