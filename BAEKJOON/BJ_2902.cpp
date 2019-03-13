#include <iostream>
using namespace std;

int main() {
	char input[100],output[100];
	cin >> input;
	int i = 0, j = 0;
	while (input[i] != '\0') {
		if (i == 0 || input[i - 1] == '-') {
			output[j++] = input[i];
		}
		++i;
	}
	output[j] = '\0';
	cout << output;
	return 0;
}