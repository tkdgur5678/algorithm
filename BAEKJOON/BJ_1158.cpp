#include <iostream>
#include <queue>
using namespace std;

int main() {
	int N,M;
	queue<int> q;
	cin >> N >> M;
	for(int i=1;i<=N;++i) {
		q.push(i);
	}
	printf("<");
	while(N--) {
		for(int i=1; i<M; ++i) {
			q.push(q.front());
			q.pop();
		}
		printf("%d",q.front());
		q.pop();
		if(q.size()>0) {
			printf(", ");
		}
	}
	printf(">");
	getchar();getchar();
	return 0;
}
