#include <iostream>
using namespace std;

void makeStar(int n) {
	int s = n;
	for (int i = 1; i <= n; ++i) {
		for (int j = n; j > i; --j) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; ++j) {
			cout << "*";
		}
		cout << endl;
	}
}
int main() {
	int N;
	cin >> N;
	makeStar(N);
	getchar(); getchar();
	return 0;
}