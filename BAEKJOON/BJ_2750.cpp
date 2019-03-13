#include <iostream>
using namespace std;

const int MAX_SIZE = 1000;
int list[MAX_SIZE];

void insertion_sort(int list[], int size) {
	int i, j;
	int key;
	for (i = 1; i < size; ++i) {
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; --j) {
			list[j + 1] = list[j];
		}
		list[j+1] = key;
	}
}

int main() {
	//input
	int N;
	cin >> N;
	//process
	for (int i = 0; i < N; ++i) {
		cin >> list[i];
	}
	insertion_sort(list, N);
	//output
	for (int i = 0; i < N; ++i) {
		cout << list[i] << endl;
	}
	getchar();
	return 0;
}