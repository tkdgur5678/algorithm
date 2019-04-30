#include <iostream>
#pragma warning(disable:4996)

int main() {
	long long S, i = 1;
	scanf("%lld", &S);
	while (S * 2 >= i * (i + 1)) {
		i++;
	}
	printf("%lld", --i);
	return 0;
}