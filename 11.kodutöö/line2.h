#ifndef LINE2_H
#define LINE2_H
#include "Point2.h"
#include <memory>
#include <iostream>
using namespace std;
class Line2{
	public:
		Line2();
		Line2(shared_ptr<Point2>,shared_ptr<Point2>);
		Line2(const Line2&);
		Line2(Line2&&);
		float length();
		shared_ptr<Point2> getNp1(shared_ptr<Point2> );
		void setNp1();
		shared_ptr<Point2> getNp2(shared_ptr<Point2> );
		void setNp2();

		friend std::ostream& operator<<(std::ostream& os, const Point2& p) {
		        os <<'('<<p.x<<','<<p.y<<')';
		        return os;
    		};
	private:
		shared_ptr<Point2> p1;
		shared_ptr<Point2> p2;
};
#endif
