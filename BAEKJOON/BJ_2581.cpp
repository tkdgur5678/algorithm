#include <iostream>
#include <vector>
using namespace std;

int minNumber = -1;

int getPrime(int min, int max) {
	int div , sum = 0;
	bool isPrime = true;
	if (min == 1) div = 2;
	else div = min;
	while (div <= max) {
		isPrime = true;
		for (int i = 2; i < div; ++i) {
			if(div%i == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			sum += div;
			if (minNumber == -1) {
				minNumber = div;
			}
		}
		++div;
	}
	return sum;
}

int main() {
	//input
	int M, N, sum;
	cin >> M >> N;
	sum = getPrime(M, N);
	if (sum != 0){
		cout << sum << endl << minNumber;
	}
	else {
		cout << -1;
	}
	return 0;
}