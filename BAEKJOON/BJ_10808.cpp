#include <iostream>
#include <string>
using namespace std;

int main() {
	char s[100];
	int alphabet[26] = { 0, };
	cin >> s;
	for(int i=0; i<100; ++i) {
		if (s[i] == '\0')
			break;
		alphabet[(int)s[i] - 97]++;
	}
	for (int i = 0; i < 26; ++i) {
		cout << alphabet[i] << " ";
	}
	return 0;
}