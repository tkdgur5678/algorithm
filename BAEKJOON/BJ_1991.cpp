#include <iostream>
using namespace std;

int N;
char **tree;

int getIndex(char c) {
	for (int i = 0; i < N; ++i) {
		if (tree[i][0] == c)
			return i;
	}
	return -1;
}

void preorder(int index) {
	if (index >= N) {
		return;
	}
	cout << tree[index][0];
	if(tree[index][1] != '.') {
		preorder(getIndex(tree[index][1]));
	}
	if (tree[index][2] != '.') {
		preorder(getIndex(tree[index][2]));
	}
}

void inorder(int index) {
	if (index >= N) {
		return;
	}
	if (tree[index][1] != '.') {
		inorder(getIndex(tree[index][1]));
	}
	cout << tree[index][0];
	if (tree[index][2] != '.') {
		inorder(getIndex(tree[index][2]));
	}
}

void postorder(int index) {
	if (index >= N) {
		return;
	}
	if (tree[index][1] != '.') {
		postorder(getIndex(tree[index][1]));
	}
	if (tree[index][2] != '.') {
		postorder(getIndex(tree[index][2]));
	}
	cout << tree[index][0];
}

int main() {
	cin >> N;
	tree = new char*[N];
	for (int i = 0; i < N; ++i) {
		tree[i] = new char[3];
		for (int j = 0; j < 3; ++j) {
			cin >> tree[i][j];
		}
	}
	preorder(0);
	cout << endl;
	inorder(0);
	cout << endl;
	postorder(0);
	return 0;
}