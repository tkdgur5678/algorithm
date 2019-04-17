#include <iostream>
using namespace std;

int main() {
	int T, n, people;
	cin >> T;
	while (T--) {
		cin >> n;
		cout << (1 << n) - 1 << endl;
	}
	return 0;
}
//#include <iostream>
//using namespace std;
//
//int main() {
//	int T, n, people;
//	cin >> T;
//	while (T--) {
//		cin >> n;
//		people = 1;
//		for (int i = 2; i <= n; ++i) {
//			people = people * 2 + 1;
//		}
//		cout << people << endl;
//	}
//	return 0;
//}