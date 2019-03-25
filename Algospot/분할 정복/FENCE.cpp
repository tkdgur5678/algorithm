#include <iostream>
#include <vector>
using namespace std;

vector<int> fence;
int solve(int left, int right) {
	if(left == right) {
		return fence[left];
	}
	int mid = (left+right)/2;
	int ret = max(solve(left,mid),solve(mid+1,right));
	
	int lo = mid;
	int hi = mid+1;

	int height = min(fence[lo],fence[hi]);
	ret = max(ret, height*2);

	while(left < lo || hi < right) {
		if(hi < right && (left == lo || fence[lo-1] < fence[hi+1])) {
			++hi;
			height = min(height, fence[hi]);
		}
		else{
			--lo;
			height = min(height, fence[lo]);
		}
		ret = max(ret, height*(hi-lo+1));
	}
	return ret;
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		int size,num;
		cin >> size;
		for(int i=0; i<size; ++i) {
			cin >> num;
			fence.push_back(num);
		}
		cout << solve(0,fence.size()-1) << endl;
		fence.clear();
	}
	return 0;
}
