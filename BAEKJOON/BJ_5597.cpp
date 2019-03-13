#include <iostream>
using namespace std;

int main() {
	bool student[30];
	memset(student, false, sizeof(student));
	int idx;
	for (int i = 0; i < 28; ++i) {
		cin >> idx;
		student[idx - 1] = true;
	}
	for (int i = 0; i < 30; ++i) {
		if (!student[i])
			cout << i + 1 << endl;
	}
	return 0;
}