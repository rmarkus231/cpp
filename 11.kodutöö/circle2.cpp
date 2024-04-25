#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-conversion"
#include "line2.h"
#include "point2.h"
#include "circle2.h"
#include <memory>
#include <cmath>
#include <utility>

using namespace std;

Circle2::Circle2(){
	p1 = make_shared<Point2>();
	r = 0.0;
}

Circle2::Circle2(shared_ptr<Point2> np1, float nr){
	p1 = np1;
	r = nr;
}

Circle2::Circle2(const Circle2& cr){
	p1 = cr.p1;
	r = cr.r;
}

Circle2::Circle2(Circle2&& cr){
	if(this != &cr){
		p1 = cr.getNp1();
		r = cr.getNr();
		cr.setNp1(nullptr);
		cr.setNr(0);
	}
}

float Circle2::circumference(){
	return 2*M_PI*r;
}

float Circle2::area(){
	return M_PI*pow(r,2);
}

bool Circle2::contains(shared_ptr<Point2> p2){
	if(p1->distanceFrom(p2) < r){
		return = true;
	}
	return false;
}

bool Circle2::contains(shared_ptr<Line2> l){
	if(contains(l->getNp1()) && contains(l->getNp2())){
		return true;
	}
	return false;
}

void Circle2::scale(float fac){
	r *= fac;
}

shared_ptr<Point2> Circle2::getNp1(){
	return p1;
}
void Circle2::setNp1(shared_ptr<Point2> p){
	p1 = p;
}
float Circle2::getNr(){
	return r;
}
void Circle2::setNr(float f){
	r = f;
}
#pragma GCC diagnostic pop
