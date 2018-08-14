/*
최소 공배수는 lcm(least common multiple) 최대 공약수는 gcd(greatest common divisor)으로서
N개의 lcm을 구할떄 두 수의 gcd를 먼저 구하여 lcm을 구한후 그 lcm과 다음 수의 lcm을 구하였다.
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int find_gcd(int a, int b) {
	return b ? find_gcd(b, a%b) : a;
}

int find_lcm(int a, int b) {
	return a * b / find_gcd(a,b);
}

int find_Nlcm( vector<int> arr ) {
	int answer = 1;
	for(int i=0; i<arr.size(); ++i) {
		answer = find_lcm(answer,arr[i]);
	}
	return answer;
}
int solution(vector<int> arr) {
    return find_Nlcm(arr);
}