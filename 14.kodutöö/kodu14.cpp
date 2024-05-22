#include "kodu14.h"
#include <vector>
#include <string>

using namespace std;

void test1(){
	vector<int> v1{1,23,14,1,5,7,99};
	int l = 5;
	liida(v1,l);
	for(auto i = v1.begin(); i != v1.end();i++){
		cout << *i << " ";
	}
	cout << endl;

	vector<string> v2{"kaks","kolm","neli"};
	string m = "kümmend";
	liida(v2,m);
	for(auto i = v2.begin(); i != v2.end();i++){
		cout << *i << " ";
	}
	cout << endl;

};

void test2(){
	vector<int> v1 = {2,6,9,12,56,23};
	vector<int> v2 = {};
	int a = 5;
	int b = 15;
	vali(v1,a,b,v2);
	for(auto i = v2.begin(); i != v2.end();i++){
		cout << *i << " ";
	}
	cout << endl;
};

#if !defined(VPL_TEST)
int main(){
	test1();
	return 0;
};
#endif
