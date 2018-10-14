#include <iostream>
#include <limits>
#include <vector>
using namespace std;

#define MAX 8
#define INF numeric_limits<double>::infinity()
double dist[MAX][MAX];
int N;

vector<bool> visited;
vector<int> path;

double ShortPath(vector<int> &path, vector<bool> &visited, double currentLength) {
	if(path.size() == N) {
		return currentLength;
	}
	double nextCity;
	double ret = INF;

	for(int next=0; next<N; ++next) {
		if(visited[next]) continue;
		int here = path.back();
		path.push_back(next);
		visited[next] = true;

		double cand = ShortPath(path,visited, currentLength+dist[here][next]);

		ret = min(ret,cand);
		visited[next] = false;
		path.pop_back();
	}

	return ret;
}

double ShortestPath() {
	double minPath=INF;
	for(int i=0; i<N; ++i) {
		path.push_back(i);
		visited[i] = true;
		minPath = min(minPath,ShortPath(path,visited,0));
		path.pop_back();
		visited[i] = false;
	}
	return minPath;
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		double city;
		scanf("%d",&N);
		for(int i=0; i<N; ++i) {
			visited.push_back(false);
			for(int j=0; j<N; ++j) {
				scanf("%lf",&city);
				dist[i][j] = city;
			}
		}	
		printf("%.10lf\n",ShortestPath());
	}
	return 0;
}