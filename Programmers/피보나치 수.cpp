/*
이미 계산한 값은 vector에 저장해두고 사용하였지만 너무큰수는 문제에서 나눠버려서 크게 상관없었을꺼 같다.
*/

#include <string>
#include <vector>

using namespace std;

vector<long long> v_fib;
long long fib(long long n) {
	if( n < v_fib.size() ) {
		return v_fib[n];
	}
	else {
		for(int i = v_fib.size(); i<=n; ++i) {
			v_fib.push_back((v_fib[i-1]+v_fib[i-2])%1234567);
		}
	}
	return v_fib[n]%1234567;
}

int solution(int n) {
    v_fib.push_back(0);
	v_fib.push_back(1);
    return fib(n);
}