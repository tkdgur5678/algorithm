#include <iostream>
using namespace std;

int main() {
	int num[6];
	cin >> num[0] >> num[1];
	num[5] = num[0] * num[1];
	num[4] = num[0] * (num[1] / 100);
	num[1] %= 100;
	num[3] = num[0] * (num[1] / 10);
	num[1] %= 10;
	num[2] = num[0] * num[1];
	cout << num[2] << endl;
	cout << num[3] << endl;
	cout << num[4] << endl;
	cout << num[5] << endl;
	return 0;
}