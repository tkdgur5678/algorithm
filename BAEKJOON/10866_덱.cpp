#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	int T,num;
	deque<int> d;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		if (s == "push_back") {
			cin >> num;
			d.push_back(num);
		}
		else if (s == "pop_back") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.back() << endl;
				d.pop_back();
			}
		}
		else if (s == "push_front") {
			cin >> num;
			d.push_front(num);
		}
		else if (s == "pop_front") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.front() << endl;
				d.pop_front();
			}
		}
		else if (s == "front") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.front() << endl;
			}
		}
		else if (s == "back") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.back() << endl;
			}
		}
		else if (s == "size") {
			cout << d.size() << endl;
		}
		else if (s == "empty") {
			cout << d.empty() << endl;
		}
	}
	return 0;
}
