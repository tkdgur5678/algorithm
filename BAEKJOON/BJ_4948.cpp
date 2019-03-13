#include <stdio.h>
#define MAX_NUM 123456

int cache[MAX_NUM*2+1] = { 0, 0, };

int getPrime(int num) {
	int div = num + 1, count = 0, max = num * 2;
	if (div < 2)
		div = 2;
	for (int i = 2; i <= max; ++i) {
		if (cache[i] == 0) continue;
		for (int j = i + i; j <= max; j+=i) {
			cache[j] = 0;
		}
	}
	for (int i = div; i <= max; ++i) {
		if (cache[i])
			count += 1;
	}
	return count;
}

int main() {
	int n;
	for (int i = 2; i < MAX_NUM*2+1; ++i)
		cache[i] = 1;
	do{
		scanf_s("%d", &n);
		int count = getPrime(n);
		if(count > 0)
			printf("%d\n", count);
	} while (n != 0);
	return 0;
}