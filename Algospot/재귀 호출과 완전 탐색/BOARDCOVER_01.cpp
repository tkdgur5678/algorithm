#include <iostream>
#include <vector>
using namespace std;

const int coverType[4][3][2] = {
	{{0,0},{1,0},{0,1}},
	{{0,0},{0,1},{1,1}},
	{{0,0},{1,0},{1,1}},
	{{0,0},{1,0},{1,-1}}
};

bool coverable(vector<vector<int>> &board, int y, int x, int type, int delta) {
	bool ok = true;
	for(int i=0; i<3; ++i) {
		const int ny = y + coverType[type][i][0];
		const int nx = x + coverType[type][i][1];

		if( ny < 0 || ny >= board.size() || nx < 0 || nx >= board[0].size()) {
			ok = false;
		}
		else if((board[ny][nx] += delta) > 1){
			ok = false;
		}
	}
	return ok;
}

int cover(vector<vector<int>> &board) {
	int y = -1, x = -1;
	int H = board.size();
	int W = board[0].size();
	for(int i=0; i<H; ++i) {
		for(int k=0; k<W; ++k) {
			if(board[i][k] == 0) {
				y = i;
				x = k;
				break;
			}
		}
		if(y != -1) break;
	}

	if( y == -1) return 1;
	int ret = 0;
	for(int type = 0; type<4; ++type)  {
		if(coverable(board,y,x,type,1)) {
			ret += cover(board);
		}
		coverable(board,y,x,type,-1);
	}
	return ret;
}



int main() {
	int T;
	cin >> T;
	while(T--) {
		vector<vector<int>> board;
		int H,W,count = 0;
		char input;
		cin >> H >> W;
		for(int i=0; i<H; ++i) {
			vector<int> temp;
			for(int k=0; k<W; ++k) {
				cin >> input;
				if(input == '#') {
					temp.push_back(1);
				}
				else {
					temp.push_back(0);
					count++;
				}
			}
			board.push_back(temp);
			temp.clear();
		}
		if(count%3 == 0) {
			cout << cover(board) << endl;
		}
		else {
			cout << 0 << endl;
		}
		board.clear();
		vector<vector<int>>().swap(board);
	}
	return 0;
}