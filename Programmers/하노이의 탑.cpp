/*
재귀함수를 사용하여 푸는 문제, 이해가 잘 안되서 다시 풀어 봐야겠다.
*/

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> answer;

void move(int from, int to) {
	vector<int> temp;
	temp.push_back(from);
	temp.push_back(to);
	answer.push_back(temp);
}

void hanoi(int n,int from,int by,int to) {
	if( n == 1 ) {
		move(from,to);
	}
	else{
		hanoi(n-1,from,to,by);
		move(from,to);
		hanoi(n-1,by,from,to);
	}
}

vector<vector<int>> solution(int n) {
    hanoi(n,1,2,3);
    return answer;
}