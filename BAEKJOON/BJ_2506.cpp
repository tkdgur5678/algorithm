#include <iostream>
using namespace std;

int main() {
	int N, answer, score = 1,total = 0;
	cin >> N;
	while (N--) {
		cin >> answer;
		if (answer) {
			total += score++;
		}
		else {
			score = 1;
		}
	}
	cout << total;
	return 0;
}