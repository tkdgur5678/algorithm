#include <iostream>
#include <queue>
#include <time.h>
using namespace std;

int main() {
	clock_t begin, end;
	int N, K;
	queue<int> q;
	cin >> N >> K;
	begin = clock();
	for (int i = 1; i <= N; ++i) {
		q.push(i);
	}
	cout << "<";
	while (q.size() > 0) {
		for(int i=1; i<K; ++i) {
			q.push(q.front()), q.pop();
		}
		//cout << q.front();
		q.pop();
		if (q.size() == 0)
			break;
		//cout << ", ";
	}
	cout << ">";
	end = clock();
	cout << "수행시간 : " << (end - begin) / CLOCKS_PER_SEC << endl;
	getchar(); getchar(); getchar();
	return 0;
}

//#include <iostream>
//#include <vector>
//#include <time.h>
//using namespace std;
//
//int main() {
//	int N, K, i;
//	vector<int> v;
//	clock_t begin, end;
//	cin >> N >> K;
//	begin = clock();
//	for (i = 1; i <= N; ++i) {
//		v.push_back(i);
//	}
//	i = --K;
//	cout << "<";
//	while (N--) {
//		cout << v[i];
//		v.erase(v.begin() + i);
//		if (v.size() == 0)
//			break;
//		i = (i + K) % v.size();
//		cout << ", ";
//	}
//	cout << ">";
//	end = clock();
//	cout << "수행시간 : " << (end - begin) / CLOCKS_PER_SEC << endl;
//	getchar(); getchar(); getchar();
//	return 0;
//}