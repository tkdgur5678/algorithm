#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] < 65 || str[i] == ' ') {
			
		}
		else if (str[i]>='A' && str[i]<='Z') {
			str[i] += 13;
			if (str[i] > 'Z') {
				str[i] -= 26;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 13;
			if (str[i] < 'a') {
				str[i] += 26;
			}
		}
	}
	cout << str;
	return 0;
}