#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c , N, answer = 0;
	cin >> N;
	while(N--){
		int reward;
		cin >> a >> b >> c;
		if (a == b && b == c) {
			reward = 10000 + a * 1000;
		}
		else if (a == b || b == c) {
			reward = 1000 + b * 100;
		}
		else if (c == a) {
			reward = 1000 + c * 100;
		}
		else {
			reward = 100 * max(a, max(b, c));
		}
		answer = max(answer, reward);
	}
	cout << answer;
	return 0;
}