#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string s;
	vector<string> suffix;
	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		suffix.push_back(s.substr(i));
	}
	sort(suffix.begin(), suffix.end());
	for(string v : suffix) {
		cout << v << endl;
	}
	return 0;
}