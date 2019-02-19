#include <iostream>
using namespace std;

unsigned int cache[1000001] = { 1, 1, };

void Eratosthenes(int min, int max) {
	int div;
	if (min == 1) div = 2;
	else div = min;
	for (int i = 2; i <= max; ++i) {
		if (cache[i] == 1) {
			continue;
		}
		for(int j=i+i; j<=max; j+=i) {
			cache[j] = 1;
		}
	}
	for (int i = min; i <= max; ++i) {
		if (cache[i] == 0) {
			cout << i << endl;
		}
	}
}

int main() {
	//input
	int M, N;
	cin >> M >> N;
	Eratosthenes(M, N);
	return 0;
}