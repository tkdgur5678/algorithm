#include <iostream>
using namespace std;

int main() {
	int T, V, E;
	cin >> T;
	while (T--) {
		cin >> V >> E;
		cout << E + 2 - V << endl;
	}
	return 0;
}