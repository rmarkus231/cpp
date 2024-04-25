#include <memory>
#include "line2.h"
#include "point2.h"
using namespace std;

Line2::Line2(){
	p1 = make_shared<Point2>();
	p2 = make_shared<Point2>() ;
}

Line2::Line2(shared_ptr<Point2> np1, shared_ptr<Point2> np2){
	p1 = np1;
	p2 = np2;
}

Line2::Line2(const Line2& l){
	p1 = make_shared<Point2>(*l.getNp1());
	p2 = make_shared<Point2>(*l.getNp2());
}

Line2::Line2(Line2&& l){
	if(this != &l){
		p1 = l.getNp1();
		p2 = l.getNp2();
		l.setNp1(nullptr);
		l.setNp1(nullptr);
	}
	return *this;

}

float Line2::length(){
	return p1->distanceFrom(p2);
}

shared_ptr<Point2> Line2::getNp1(){return p1;}
shared_ptr<Point2> Line2::getNp2(){return p2;}
void Line2::setNp1(shared_ptr<Point2> p){p1 = p;};
void Line2::setNp2(shared_ptr<Point2> p){p2 = p;};
