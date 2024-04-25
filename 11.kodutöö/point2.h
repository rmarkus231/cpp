#ifndef POINT2_H
#define POINT2_H
#include <iostream>
#include <memory>
using namespace std;
class Point2{
	public:
		Point2();
		Point2(float,float);
		float getNx();
		void setNx(float);
		float getNy();
		void setNy(float);
		float distanceFrom(shared_ptr<Point2>);
		friend std::ostream& operator<<(std::ostream& os, const Point2& p) {
		        os <<'('<<p.x<<','<<p.y<<')';
		        return os;
    		};
	private:
		float x;
		float y;
};
#endif
