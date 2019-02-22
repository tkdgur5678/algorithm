#include <iostream>
#include <string>
using namespace std;

string reverse(string s) {
	string temp = "";
	for (int i = s.length(); i >= 0; --i) {
		temp += s.substr(i, 1);
	}
	return temp;
}

int main() {
	int N;
	cin >> N;
	for (int i = -N + 1; i < N; ++i) {
		int count = N - abs(i);
		string star = "";
		for (int j = 0; j < N; ++j) {
			count-- > 0 ? star += '*' : star += ' ';
		}
		cout << star << reverse(star) << endl;
	}
	return 0;
}