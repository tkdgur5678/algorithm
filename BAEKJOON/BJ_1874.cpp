#include <iostream>
#include <stack>
#include <string>
using namespace std;

#pragma warning(disable:4996)
int readInt()
{
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch - '0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result * 10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
int main() {
	int n, input, count = 1, length = 0, size = 0;
	//cin >> n;
	n = readInt();
	int *stack = new int[n];
	string output = "";
	//char *output = new char[n*2+1];
	for (int i = 1; i <= n; ++i) {
		//scanf("%d", &input);
		input = readInt();
		if (input >= count) {
			for (int j = count; j <= input; ++j) {
				stack[size++] = j;
				output += "+\n";
			}
			size--;
			output += "-\n";
			count = input + 1;
		}
		else {
			if (input == stack[size-1]) {
				size--;
				output += "-\n";
			}
			else {
				cout << "NO";
				break;
			}
		}
	}
	if (output.length() == n * 4) {
		printf("%s", output.c_str());
	}
	return 0;
}

//int main() {
//	int n, input, count = 1, size = 0;
//	stack<int> st;
//	cin >> n;
//	char *output = new char[n*2];
//	for (int i = 1; i <= n; ++i) {
//		scanf("%d", &input);
//		if (input >= count) {
//			for (int j = count; j <= input; ++j) {
//				st.push(j);
//				output[size++] = '+';
//			}
//			st.pop();
//			output[size++] = '-';
//			count = input + 1;
//		}
//		else {
//			if (input == st.top()) {
//				st.pop();
//				output[size++] = '-';
//			}
//			else {
//				cout << "NO";
//				break;
//			}
//		}
//	}
//	if (size == n * 2) {
//		for (int i = 0; i < n * 2; ++i) {
//			printf("%c\n", output[i]);
//		}
//	}
//	return 0;
//}