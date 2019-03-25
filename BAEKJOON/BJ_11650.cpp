#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//이걸 다만드네 Pair를 기억하자
class point {
private:
	int xpos;
	int ypos;

public:
	point(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void PointSet(int x, int y);
	int getX();
	int getY();
	void ShowPosition();
};

bool comparePos(point p1, point p2) {
	if (p1.getX() < p2.getX()) {
		return true;
	}
	else if (p1.getX() == p2.getX()) {
		return p1.getY() < p2.getY() ? true : false;
	}
	else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	int N, x, y;
	cin >> N;
	vector<point> v;
	for(int i=0; i<N; ++i) {
		cin >> x >> y;
		v.push_back(point(x, y));
	}
	sort(v.begin(), v.end(), comparePos);
	for (int i = 0; i < N; ++i) {
		v[i].ShowPosition();
	}
	return 0;
}

void point::PointSet(int x, int y)
{
	xpos = x;
	ypos = y;
}

int point::getX()
{
	return xpos;
}

int point::getY()
{
	return ypos;
}

void point::ShowPosition()
{
	cout << xpos << " " << ypos << "\n";
}
