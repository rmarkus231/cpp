#include "kodu14.h"
#include <vector>
#include <string>

using namespace std;

void test1(){
	vector<int> v{1,23,14,1,5,7,99};
	int l = 5;
	liida(v,l);
	vector<string> s{"kaks","kolm","neli"};
	string m = "kümmend";
	liida(s,m);
};

void test2(){
	vector<int> v1 = {1,5,8,12,4,67,14};
	vector<int> v2 = {};
	int a = 4;
	int b = 30;
	vali(v1,a,b,v2);
	for(auto i = v2.begin(); i != v2.end();i++){
		cout << *i << " ";
	}
	cout << endl;
};

int main(){
	test2();
	return 0;
};
