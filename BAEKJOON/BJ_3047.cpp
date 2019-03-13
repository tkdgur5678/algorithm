#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int num[3];
	for (int i = 0; i < 3; ++i) {
		cin >> num[i];
	}
	string ABC;
	cin >> ABC;
	sort(num, num + 3);
	for (int i = 0; i < 3; ++i) {
		cout << num[(int)ABC[i]-'A'] << " ";
	}
	return 0;
}