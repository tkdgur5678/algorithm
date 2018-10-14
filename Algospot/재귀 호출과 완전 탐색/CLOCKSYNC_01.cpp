#include <iostream>
using namespace std;

const int CLOCKS = 16, INF = 9999, SWITCHES = 10;

const char Switchs[SWITCHES][CLOCKS+1] = {
	"1110000000000000",
	"0001000101010000",
	"0000100000100011",
	"1000111100000000",
	"0000001110101000",
	"1010000000000011",
	"0001000000000011",
	"0000110100000011",
	"0111110000000000",
	"0001110001000100"
};

bool checkTwelve(int *clock) {
	for(int i=0; i<16; ++i) {
		if(clock[i] != 12) {
			return false;
		}
	}
	return true;
}
void turnTwelve(int *clock, int click) {
	for(int i=0; i<16; ++i) {
		if(Switchs[click][i] == '1') {
			clock[i] = clock[i] != 12 ? clock[i]+3 : 3;
		}
	}
}

int solve(int *clock, int click) {
	if(click == SWITCHES) {
		return checkTwelve(clock) ? 0 : INF;
	}
	int ret = INF;
	for(int i=0; i<4; ++i) {
		ret = min(ret, i+solve(clock,click+1));
		turnTwelve(clock,click);
	}

	return ret;
}

int main() {
	int clock[16];

	int T;
	cin >> T;

	while(T--) {
		for(int i=0; i<16; ++i) {
			cin >> clock[i];
		}
		int answer = solve(clock,0);
		answer == INF ? cout << -1 : cout << answer;
		cout << endl;
	}
	return 0;
}

