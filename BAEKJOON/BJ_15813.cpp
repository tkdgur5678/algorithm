#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
	char ch;
	cin >> n;
	while (n--) {
		cin >> ch;
		sum += (int)(ch - 'A') + 1;
	}
	cout << sum;
	return 0;
}