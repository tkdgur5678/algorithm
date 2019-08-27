/*
  BFS 문제 19개의 도형을 하나씩 다 놓아보면서 가장 큰값을 구함
*/

#include <iostream>
using namespace std;

int cache[500][500];
int block[19][3][2] = {
	{{0,1},{0,2},{0,3}},
	{{1,0},{2,0},{3,0}},

	{{0,1},{1,0},{1,1}},

	{{1,0},{2,0},{2,1}},
	{{0,1},{0,2},{1,0}},
	{{0,1},{1,1},{2,1}},
	{{0,1},{0,2},{-1,2}},

	{{1,0},{2,0},{2,-1}},
	{{1,0},{1,1},{1,2}},
	{{1,0},{2,0},{0,1}},
	{{0,1},{0,2},{1,2}},

	{{1,0},{1,1},{2,1}},
	{{0,1},{-1,1},{-1,2}},

	{{1,0},{1,-1},{2,-1}},
	{{0,1},{1,1},{1,2}},

	{{0,1},{-1,1},{0,2}},
	{{1,0},{2,0},{1,1}},
	{{0,1},{0,2},{1,1}},
	{{1,0},{1,-1},{2,0}}
};

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> cache[i][j];
		}
	}
	int answer = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			for (int k = 0; k < 19; ++k) {
				bool ok = true;
				int sum = cache[i][j];
				for (int l = 0; l < 3; ++l) {
					int y = i + block[k][l][0];
					int x = j + block[k][l][1];
					if (0 <= x && x < M && 0 <= y && y < N) {
						sum += cache[y][x];
					}
					else {
						ok = false;
						break;
					}
				}
				if (ok && answer < sum) {
					answer = sum;
				}
			}
		}
	}
	cout << answer;
	return 0;
}
