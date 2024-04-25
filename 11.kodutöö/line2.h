#ifndef LINE2_H
#define LINE2_H
#include "point2.h"
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
		shared_ptr<Point2> getNp1();
		void setNp1(shared_ptr<Point2>);
		shared_ptr<Point2> getNp2();
		void setNp2(shared_ptr<Point2>);

		friend std::ostream& operator<<(std::ostream& os, const Line2& l) {
		        os <<'('<<l.p1->getNx()<<','<<l.p2->getNy()<<')'<<'-'<<'('<<l.p2->getNx()<<','<<l.p2->getNy()<<')';
		        return os;
    		};
	private:
		shared_ptr<Point2> p1;
		shared_ptr<Point2> p2;
};
#endif
