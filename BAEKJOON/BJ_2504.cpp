#include <stdio.h>
#include <stack>
using namespace std;

int sum, tmp = 1;
char str[33];
stack<char> stk;

int main() {
	scanf_s("%s", str + 1);

	for (int i = 1; str[i]; i++) {
		switch (str[i]) {
		case '(':
			tmp *= 2; stk.push('('); break;
		case '[':
			tmp *= 3; stk.push('['); break;
		case ')':
			if (str[i - 1] == '(') sum += tmp;
			if (stk.empty()) {
				printf("0");
				return 0;
			}
			if (stk.top() == '(') stk.pop();
			tmp /= 2; break;
		case ']':
			if (str[i - 1] == '[') sum += tmp;
			if (stk.empty()) {
				printf("0");
				return 0;
			}
			if (stk.top() == '[') stk.pop();
			tmp /= 3;
		}
	}

	printf("%d", stk.empty() ? sum : 0);

	return 0;
}