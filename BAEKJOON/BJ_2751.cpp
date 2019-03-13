#include <iostream>
using namespace std;
#define MAX_NUM 1000000

int sorted[MAX_NUM] = { 0, };

void merge(int list[], int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;
	while (i <= mid && j <= right) {
		if (list[i] < list[j]) {
			sorted[k++] = list[i++];
		}
		else {
			sorted[k++] = list[j++];
		}
	}
	if (i > mid) {
		for (l = j; l <= right; ++l) {
			sorted[k++] = list[l];
		}
	}
	else {
		for (l = i; l <= mid; ++l) {
			sorted[k++] = list[l];
		}
	}
	for (l = left; l <= right; ++l) {
		list[l] = sorted[l];
	}
}

void mergeSort(int list[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		mergeSort(list, left, mid);
		mergeSort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}
int main() {
	//input
	int N;
	cin >> N;

	int *list = new int[MAX_NUM];
	for (int i = 0; i < N; ++i) {
		scanf_s("%d", &list[i]);
	}
	//process
	mergeSort(list, 0, N - 1);
	//output
	for (int i = 0; i < N; ++i) {
		printf("%d\n", list[i]);
	}
	return 0;
}