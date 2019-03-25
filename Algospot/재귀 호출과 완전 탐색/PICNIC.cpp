#include <iostream>
using namespace std;

bool areFriends[10][10] = {false,};
bool taken[10] = {false,};
int n;
int countPairings(bool taken[10]) {
	int firstFree = -1;
	for(int i=0; i<n; ++i) {
		if(!taken[i]) {
			firstFree = i;
			break;
		}
	}

	if(firstFree == -1) return 1;
	int ret = 0;

	for(int pairWith = firstFree+1; pairWith < n; ++pairWith) {
		if(!taken[pairWith] && areFriends[firstFree][pairWith]) {
			taken[pairWith] = taken[firstFree] = true;
			ret += countPairings(taken);
			taken[pairWith] = taken[firstFree] = false;
		}
	}
	return ret;
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		int pairs,ret = 0;
		int a,b;
		cin >> n >> pairs;
		for(int i=0; i<pairs; ++i) {
			cin >> a >> b;
			areFriends[a][b] = areFriends[b][a] = true;
		}
		cout << countPairings(taken) << endl;
		for(int i=0; i<10; ++i) {
			for(int k=0; k<10; ++k) {
				areFriends[i][k] = areFriends[k][i] = false;
			}
		}
	}
	getchar();getchar();getchar();
	return 0;
}
