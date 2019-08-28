#include <iostream>
#include <algorithm>
using namespace std;

bool my_next_permutation(int *arr, int n) {
	int i = n - 1;
	while (i > 0 && arr[i - 1] >= arr[i]) i--;	//내림차순이 끝나는 시점의 위치
	if (i <= 0) return false;	//마지막 순열
	int j = n - 1;
	while (arr[j] <= arr[i - 1]) j--;
	swap(arr[i - 1], arr[j]);
	j = n - 1;
	while (i < j) {
		swap(arr[i++], arr[j--]);
	}
	return true;
}
bool my_prev_permutation(int *arr, int n) {
	int i = n - 1;
	while (i > 0 && arr[i - 1] <= arr[i]) i--;	//내림차순이 끝나는 시점의 위치
	if (i <= 0) return false;	//마지막 순열
	int j = n - 1;
	while (arr[j] >= arr[i - 1]) j--;
	swap(arr[i - 1], arr[j]);
	j = n - 1;
	while (i < j) {
		swap(arr[i++], arr[j--]);
	}
	return true;
}
int main() {
	int N;
	cin >> N;
	int *permutation = new int[N];
	for (int i = 0; i < N; ++i) {
		cin >> permutation[i];
	}
	if (my_prev_permutation(permutation, N)) {
		for (int i = 0; i < N; ++i) {
			cout << permutation[i] << " ";
		}
	}
	else {
		cout << -1;
	}
	
	delete[]permutation;

	return 0;
}
