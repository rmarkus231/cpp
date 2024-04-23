#include "andmed.h"
#include <iostream>
#include <fstream>
using namespace std;


void testHeapArr(bool f){
	int x{7};
	int *r = loo_andmed(x);
	if(f){
		for(int i = 0; i < x; i++){
			cout << *(r+i) << endl;
		}
	}else{
		tootle_andmeid(r,x);
	}
}

void testReadFile(bool f){
	string file("testData.txt");
	string* sptr = &file;
	auto* r = loe_andmed(sptr);
	if(f){
		for(size_t i = 0; i < r->size(); i++){
			cout << r->at(i)<< endl;
		}
	}else{
		tootle_andmeid_vektoris(r);
	}
}

void testAuto(){
	string fn = "autod.txt";
	vector<Auto*>* autod = loeAutod(fn);
	for(size_t i = 0; i < autod->size();i++){
		cout << *(autod->at(i)) << endl;
	}
	Auto* lowCost = vähima_kuluga(autod);
	cout << "vähima kuluga: " << *lowCost << endl;
	kustutaAutod(autod);
}

#if !defined(VPL_TEST)
int main(){
	//testHeapArr(false);
	//testReadFile(false);
	testAuto();
	return 0;
}
#endif
