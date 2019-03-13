#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len; ++i) {
		if ((int)str[i] - 3 < 65) {
			str[i] += 23;
		}
		else {
			str[i] -= 3;
		}
	}
	cout << str;
	return 0;
}