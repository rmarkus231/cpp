#include "fun1.h"
#include "lilled.h"
#include "teler.h"
#include <iostream>

void testKartul(){
	float x{};
	float y{};
	int k{};

	cout << "Maalapi pikkus: ";
	cin >> x;
	cout << "Maalapi laius: ";
	cin >> y;
	cout << "Keskmine toodang(m2): ";
	cin >> k;

	cout << arvuta_kottide_kogus(x,y,k) << endl;
}

void testLilled(){
	lilled(100,"lilled.txt");
	lilled<float>(10.0,"lilled.txt");
}

void testTeler(){
	string filename = "telerid.txt";
	vector<Teler*>* telerid = loeTelerid(filename);
	for(size_t i = 0;i < telerid->size();i++){
		cout << *(telerid->at(i)) << endl;
	}
	cout << "soovitan osta: " << *suurima_diagonaaliga(telerid) << endl;
	kustutaTelerid(telerid);
	delete telerid;
}

int main(){
	//testKartul();
	//testLilled();
	testTeler();
	return 0;
}
