#include "arvutused.h"
#include "circle2.h"
#include "line2.h"
#include "point2.h"
#include <iostream>

using namespace std;

void testArvutused(){
	int n1{2};
	int n2{8};
	int n3{5};
	int n4{};
	int n5{};
	int* p1{&n1};
	int* p2{&n2};
	int* p3{&n3};
	int* p4{&n4};
	int &r1{n1};
	int &r2{n2};
	int &r3{n3};
	//int &r4{n4};
	int &r5{n5};

	cout << tSuurimP(p1,p2,p3) << endl;
	cout << tSuurimR(r1,r2,r3) << endl;
	cout << suurim(r1,p2,p3) << endl;
	suurim(p1,p3,p2,p4);
	cout << *p4 << endl;
	suurim(r2,r1,r3,r5);
	cout << r5 << endl;
}

void test(){
	Point2 pt1{1.5,2.3};
	Point2 pt2{7.3,10.5};
	Point2 *p1{&pt1};
	Point2 *p2{&pt1};
	cout << pt1 << endl;
	cout << pt1.distanceFrom(p2) << endl;
	//sirglõik
	Line2 le{p1,p2};
	cout << le << endl;
	//ring
	Circle2 ci{p1,3.2};
	cout << ci.circumference() << endl;
	cout << ci.area() << endl;
	cout << ci.contains(p2) << endl;
	ci.scale(11.3);
	cout << ci.contains(p2) << endl;
	cout << ci << endl;
}

#if !defined(VPL_TEST)
int main(){
	testArvutused();
	test();
	return 0;
}
#endif
