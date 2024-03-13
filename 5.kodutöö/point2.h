#ifndef POINT2_H
#define POINT2_H
#include <iostream>
using namespace std;
class Point2{
	public:
		float x;
		float y;
		Point2();
		Point2(float,float);
		float distanceFrom(Point2*);
		friend std::ostream& operator<<(std::ostream& os, const Point2& obj){
			os << obj.x << ',' << obj.y; 
			return os;
		}
};
#endif
