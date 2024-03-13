#ifndef CIRCLE2_H
#define CIRCLE2_H
#include <iostream>
#include <cmath>
#include "point2.h"
#include "line2.h"
using namespace std;
class Circle2{
	public:
		Point2* p1{};
		float r{0};
		Circle2(Point2*,float);
		float circumference();
		float area();
		bool contains(Point2*);
		bool contains(Line2*);
		void scale(float);
		friend std::ostream& operator<<(std::ostream& os, const Circle2& obj){
			os << obj.p1 <<","<<obj.r<<endl;
			return os;
		}
};
#endif
