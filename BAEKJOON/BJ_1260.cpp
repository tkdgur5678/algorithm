#include <cstdio>
#include <queue>
using namespace std;

int Graph[1001][1001] = {0,};
int DFSvisit[1001] = {0,};
int BFSvisit[1001] = {0,};

void DFS(int v, int N) {
	DFSvisit[v] = 1;
	printf("%d ",v);
	for(int i=1; i<=N; ++i) {
		if(Graph[v][i] == 1 && DFSvisit[i] == 0) {
			DFS(i, N);
		}
	}
	return;
}
void BFS(int v, int N) {
	queue<int> q;
	printf("%d ",v);
	q.push(v);
	BFSvisit[v] = 1;
	int count = 0;
	while(count++<N) {
		v = q.front();
		q.pop();
		for(int i=1; i<=N; ++i) {
			if(Graph[v][i] == 1 && BFSvisit[i] == 0) {
				printf("%d ",i);
				q.push(i);
				BFSvisit[i] = 1;
			}
		}
	}
}

int main() {
	int N,M,V;
	scanf("%d%d%d",&N,&M,&V);
	int s,e;
	for(int i=0; i<M; ++i) {
		scanf("%d%d",&s,&e);
		Graph[s][e] = 1;
		Graph[e][s] = 1;
	}
	DFS(V,N);
	printf("\n");
	BFS(V,N);
	getchar();getchar();
	return 0;
}
