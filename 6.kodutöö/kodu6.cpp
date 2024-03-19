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

int main(){
	//testHeapArr(false);
	testReadFile(false);
	return 0;
}
