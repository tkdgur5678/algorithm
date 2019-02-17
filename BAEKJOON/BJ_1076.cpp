#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	long long answer = 0;
	string color[10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	string input;
	for (int i = 1; i >= 0; --i) {
		cin >> input;
		for (int j = 0; j < 10; ++j) {
			if (input == color[j]) {
				answer += (j*pow(10,i));
			}
		}
	}
	cin >> input;
	for (int j = 0; j < 10; ++j) {
		if (input == color[j]) {
			answer *= pow(10,j);
		}
	}
	cout << answer;
	return 0;
}