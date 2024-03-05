#include "kodu4.h"
#include <iostream>
#include <string>

using namespace std;


void testLiida(){
	float f = liida(4.3,3.6);
	int i = liida(10,4);
	string s = liida(string("gg"),string("text"));
	cout << f << endl;
	cout << i << endl;
	cout << s << endl;

}

void testOnVahemikus(){
	bool i1 = onVahemikus<5>(1,10);
	bool i2 = onVahemikus<0>(-1,1);
	cout << "vahemik: " <<i1 << endl;
	cout << "vahemik: " <<i2 << endl;
}

void testMassiiv(){
	Massiiv<int> m{};
	m.lisaElement(0);
	cout << m.kasSisaldub(1) << endl;
	/*
	m.lisaElement(5);
	m.lisaElement(8);
	m.lisaElement(5);
	m.lisaElement(5);
	m.print();
	m.kustutaElement();
	m.print();
	m.lisaElement(25);
	m.asendaElement(m.getElement(0), 9);
	m.print();
	cout << m.getElement(8) << '\n';
	cout << boolalpha << m.kasTais() << " " << m.kasTyhi() << '\n';
	cout << m.vabuKohti() << " "  << m.kasSisaldub(5) << " " << m.getSuurus() << '\n';
	*/
}

int main(){
	testLiida();
	testOnVahemikus();
	testMassiiv();
}
