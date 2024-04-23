#include "point2.h"
#include <memory>
#include <cmath>
using namespace std;

Point2::Point2(){
	x = 0.0;
	y = 0.0;
};

Point2::Point2(float nx, float ny){
	x = nx;
	y = ny;
};

float Point2::getNx(){
	return x;
}

void Point2::setNx(float nx){
	x = nx;
}

float Point2::getNy(){
	return y;
}

void Point2::setNy(float ny){
	y = ny;
}

float Point2::distanceFrom(shared_ptr<Point2> p){
	return sqrt(pow((p.getNx()-x),2) + pow((p.getNy()-y),2));
}
