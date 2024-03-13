#include "line2.h"
#include "point2.h"
using namespace std;
Line2::Line2(Point2* np1, Point2* np2){
	p1 = np1;
	p2 = np2;
}
float Line2::length(){
	return p1->distanceFrom(p2);
}
float Line2::lengthConst() const{
	return p1->distanceFrom(p2);
}
