#include <iostream>
using namespace std;

int main() {
	int N, seat[101] = { 0, }, customer, refuse = 0;
	cin >> N;
	while (N--) {
		cin >> customer;
		if (seat[customer] == 0) {
			seat[customer] = 1;
		}
		else {
			refuse++;
		}
	}
	cout << refuse;
	return 0;
}