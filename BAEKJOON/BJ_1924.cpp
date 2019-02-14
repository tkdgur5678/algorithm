#include <iostream>
#include <string>
using namespace std;

int main() {
	int m, d;
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string day[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	cin >> m >> d;
	int sum = d - 1;
	for (int i = 0; i < m - 1; ++i) {
		sum += month[i];
	}
	cout << day[sum % 7];
	getchar();
	getchar();
	return 0;
}
