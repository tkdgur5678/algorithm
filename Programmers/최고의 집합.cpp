/*
주어진 수들의 합이 모두 같다면 그 수들의 곱이 가장 큰 값은 두수의 차이가 가장 작은 값이다.
*/

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> answer;
void topSet(int n, int s) {
	if( n > s ) {
		answer.push_back(-1);
	}
	else{
		for(int i=0; i<n; ++i) {
			answer.push_back(s/n);
		}
		for(int i=0; i<s%n; ++i) {
			answer[i]++;
		}
		sort(answer.begin(),answer.end());
	}
}

vector<int> solution(int n, int s) {
    topSet(n,s);
    return answer;
}