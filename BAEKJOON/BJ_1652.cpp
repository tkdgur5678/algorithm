#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	char **room = new char*[N];
	for (int i = 0; i < N; ++i) {
		room[i] = new char[N];
		for (int j = 0; j < N; ++j) {
			cin >> room[i][j];
		}
	}
	int width = 0, height = 0;
	//가로
	for (int i = 0; i < N; ++i) {
		int seat = 0;
		for (int j = 0; j < N; ++j) {
			if (room[i][j] == '.') {
				seat++;
			}
			else {
				if (seat >= 2) {
					width++;
				}
				seat = 0;
			}
		}
		if (seat >= 2) {
			width++;
		}
	}
	//세로
	for (int i = 0; i < N; ++i) {
		int seat = 0;
		for (int j = 0; j < N; ++j) {
			if (room[j][i] == '.') {
				seat++;
			}
			else {
				if (seat >= 2) {
					height++;
				}
				seat = 0;
			}
		}
		if (seat >= 2) {
			height++;
		}
	}
	cout << width << " " << height;
	return 0;
}