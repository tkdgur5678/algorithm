#include <iostream>
#include <string>
using namespace std;

int main() {
	bool palindrome = true;
	string s;
	cin >> s;
	while (s.length() > 1) {
		if (s[0] != s[s.length() - 1]) {
			palindrome = false;
			break;
		}
		s = s.substr(1, s.length() - 2);
	}
	cout << palindrome ? "1" : "0";
	return 0;
}