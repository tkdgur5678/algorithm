#include <iostream>
#include <cmath>
using namespace std;

#pragma warning(disable:4996);

class Point{
private:
	int x;
	int y;
public:
	Point() {};
	~Point() {};
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	};
	int getX() { return x; };
	int getY() { return y; };
};

bool is_in(Point star, int radius, Point rocket) {
	int x = star.getX() - rocket.getX();
	int y = star.getY() - rocket.getY();
	return radius < sqrt(pow(x, 2) + pow(y, 2)) ? false : true;
}

int main() {
	int T, N, x, y, r;
	Point start, end;
	scanf("%d", &T);
	while (T--) {
		int count = 0;
		scanf("%d %d", &x, &y);
		start = Point(x, y);
		scanf("%d %d", &x, &y);
		end = Point(x, y);
		scanf("%d", &N);
		while (N--) {
			scanf("%d %d %d", &x, &y, &r);
			if (is_in(Point(x, y), r, start) ^ is_in(Point(x, y), r, end)) {
				++count;
			};
		}
		printf("%d\n", count);
	}

	return 0;
}