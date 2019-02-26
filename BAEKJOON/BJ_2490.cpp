#include <iostream>
using namespace std;

int main() {
	int N = 3, num;
	char yut[5] = { 'D','C','B','A','E' };
	while (N--) {
		int sum = 0;
		for (int i = 0; i < 4; ++i) {
			cin >> num;
			sum += num;
		}
		cout << yut[sum] << endl;
	}
	return 0;
}