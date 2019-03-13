#include <iostream>
#include <string>
using namespace std;

string reverse(string s) {
	string temp = "";
	for (int i = s.length(); i >= 0; --i) {
		temp.append(s.substr(i,1));
	}
	return temp;
}

int main() {
	string s = "", input = "";
	while (true) {
		getline(cin, input);
		if (input != "END"){
			s += (reverse(input) + '\n');
		}
		else {
			break;
		}
	}
	cout << s;
	return 0;
}