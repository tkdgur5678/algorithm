#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int sum = 0, len = str.length();
	for (int i = 0; i < len; ++i) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			sum++;
		}
	}
	cout << sum;
	return 0;
}