#include "point2.h"
#include "circle2.h"
#include "line2.h"
#include <cmath>
using namespace std;
Circle2::Circle2(Point2* np1, float nr){
	p1 = np1;
	if(!(nr < 0.0)){
		r = nr;
	}
}

float Circle2::circumference(){
	return M_PI * 2.0*r;
}

float Circle2::area(){
	return M_PI * r*r;
}

bool Circle2::contains(Point2* p){
	if(p1->distanceFrom(p) < r){
		return true;
	}else{
		return false;
	}
}

bool Circle2::contains(Line2* i){
	if(p1->distanceFrom(i->p1) <= r && p1->distanceFrom(i->p2) <= r){
		return true;
	}else{
		return false;
	}
}

void Circle2::scale(float factor){
	if(factor > 0.0){
		r = r*factor;
	}
}
