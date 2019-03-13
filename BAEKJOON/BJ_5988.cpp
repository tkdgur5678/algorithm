#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string str;
	cin >> N;
	while (N--) {
		cin >> str;
		str = str[str.length() - 1];
		if (stoi(str) % 2 == 0) {
			cout << "even" << endl;
		}
		else {
			cout << "odd" << endl;
		}
	}
	return 0;
}