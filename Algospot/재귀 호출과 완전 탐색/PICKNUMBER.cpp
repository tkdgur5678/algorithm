#include <iostream>
#include <vector>
using namespace std;

vector<int> picked;

void print(vector<int> &temp) {
	for(int i=0; i<temp.size(); ++i) {
		cout << picked[i] << " ";
	}
	cout << endl;
}

void pick(int n, vector<int> &picked, int toPick) {
	if(toPick == 0) {
		print(picked);
		return;
	}
	int smallest = picked.empty() ? 0 : picked.back() + 1;

	for(int next = smallest; next < n; ++next) {
		picked.push_back(next);
		pick(n, picked, toPick - 1);
		picked.pop_back();
	}
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n,toPick;
		cin >> n >> toPick;
		pick(n,picked,toPick);
	};
}
