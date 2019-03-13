#include <iostream>
using namespace std;

int main() {
	int N, sum = 1;
	cin >> N;
	while (N>1) {
		sum *= N--;
	}
	cout << sum;
	return 0;
}