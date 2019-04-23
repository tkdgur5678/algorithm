#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int E, S, M;
	cin >> E >> S >> M;
	int Max = 15 * 28 * 19;
	E %= 15;
	S %= 28;
	M %= 19;
	for (int i = 0; i <= Max; ++i) {
		if (i % 15 == E && i % 28 == S && i % 19 == M) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}

//int main() {
//	int E, S, M, sum = 1;
//	cin >> E >> S >> M;
//	while (E != 1 || S != 1 || M != 1) {
//		int Max = max(E, max(S, M)) - 1;
//		sum += Max;
//		E = E > Max ? E - Max : E + 15 - Max;
//		S = S > Max ? S - Max : S + 28 - Max;
//		M = M > Max ? M - Max : M + 19 - Max;
//	}
//	cout << sum << endl;
//	return 0;
//}