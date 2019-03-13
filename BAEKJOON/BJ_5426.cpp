#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string message;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		int size = sqrt(str.size());
		for (int i = size-1; i >= 0; --i) {
			for (int j = 0; j < size; ++j) {
				message += str[i + size * j];
			}
		}
		message += '\n';
	}
	cout << message;
	return 0; 
}