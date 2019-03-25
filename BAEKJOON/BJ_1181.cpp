#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compareLen(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main() {
	vector<string> v;
	int N;
	string str;

	cin >> N;
	for (unsigned int i = 0; i < N; ++i) {
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end(), compareLen);
	vector<string>::iterator iter;
	vector<string>::iterator end_iter = unique(v.begin(), v.end());
	for (iter = v.begin(); iter < end_iter; ++iter) {
		cout << *iter << "\n";
	}
	return 0;
}