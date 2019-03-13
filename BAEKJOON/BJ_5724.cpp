#include <iostream>
using namespace std;

int getSquare(int N) {
	int sum = 0;
	for (int i = 1; i <= N; ++i) {
		sum += i * i;
	}
	return sum;
}

int main() {
	int N;
	while(true){
		cin >> N;
		if (N == 0) break;
		cout << getSquare(N) << endl;
	}
	return 0;
}