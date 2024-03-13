#ifndef LINE2_H
#define LINE2_H
#include <iostream>
#include "point2.h"
using namespace std;
class Line2{
	public:
		Point2* p1;
		Point2* p2;
		Line2(Point2*,Point2*);
		float length() ;
		float lengthConst() const;
		friend std::ostream& operator<<(std::ostream& os, const Line2& obj){
			os << obj.lengthConst();
			return os;
		}
};
#endif
