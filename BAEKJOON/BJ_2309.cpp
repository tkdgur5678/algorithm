#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int dwarf[9];

void findSeven() {
	int sum = 0;
	int notDwarf[2];
	for (int i = 0; i < 9; ++i) {
		sum += dwarf[i];
	}
	for (int i = 0; i < 9; ++i) {
		for (int j = i + 1; j < 9; ++j) {
			if (sum - dwarf[i] - dwarf[j] == 100) {
				notDwarf[0] = i;
				notDwarf[1] = j;
				break;
			}
		}
	}
	for (int i = 0; i < 9; ++i) {
		if (i != notDwarf[0] && i != notDwarf[1])
			v.push_back(dwarf[i]);
	}
	sort(v.begin(), v.end());
	for (int i : v)
		cout << i << endl;
}

int main() {
	for (int i = 0; i < 9; ++i) {
		cin >> dwarf[i];
	}
	findSeven();
	return 0;
}