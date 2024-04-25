#ifndef CIRCLE2_H 
#define CIRCLE2_H
#include <memory>
#include <iostream>
#include "line2.h"
#include "point2.h"
using namespace std;

class Circle2{
	public:
		Circle2();
		Circle2(shared_ptr<Point2>,float);
		Circle2(const Circle2&) = default;
		Circle2(Circle2&&) = default;
		float circumference();
		float area();
		bool contains(shared_ptr<Point2>);
		void scale(float);
		shared_ptr<Point2> getNp1();
		void setNp1(shared_ptr<Point2>);
		float getNr();
		void setNr(float);

		friend std::ostream& operator<<(std::ostream& os, const Circle2& cr) {
		        os <<'('<<cr.p1->getNx()<<','<<cr.p1->getNy()<<')'<<','<<cr.getNr();
		        return os;
    		};
	private:
		shared_ptr<Point2> p1;
		float r;
};

#endif
