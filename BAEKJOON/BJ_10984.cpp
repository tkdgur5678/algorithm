#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T, N, sum = 0, grade;
	double total = 0.0, score;
	cin >> T;
	while (T--) {
		cin >> N;
		while (N--) {
			cin >> grade >> score;
			total += (double)grade*score;
			sum += grade;
		}
		cout << fixed;
		cout.precision(1);
		cout << sum << " " << total / (double)sum << endl;
		total = 0.0;
		sum = 0;
	}
	return 0;
}