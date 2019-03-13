#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, snakebird, *apple;
	cin >> N >> snakebird;
	apple = new int[N];
	for (int i = 0; i<N; ++i) {
		cin >> apple[i];
	}
	sort(apple, apple + N);
	for (int i = 0; i < N; ++i) {
		if (snakebird >= apple[i]) {
			snakebird++;
		}
		else {
			break;
		}
	}
	cout << snakebird;
	return 0;
}