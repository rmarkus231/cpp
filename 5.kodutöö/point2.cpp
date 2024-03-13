#include "point2.h"
#include <cmath>
using namespace std;
Point2::Point2(){
	x = 0.0;
	y = 0.0;
}
Point2::Point2(float nx, float ny){
	x = nx;
	y = ny;
}
float Point2::distanceFrom(Point2* p2){
	return sqrt(pow((p2->x),2)+pow((p2->y),2));
}
