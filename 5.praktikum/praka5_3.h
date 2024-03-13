#ifndef PRAK5_3_
#define PRAKS5_3_H
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <stdlib>
#include <algorithm>
using namespace std;

void addFiles(string f1, string f2){
	fstream fin1(file1,fstream::in);
	fstream fin2(file2,fstream::in);
	char ch;
	vector<int> x;
	vector<int> y;
	int c1{};
	int c2{};
	if(!file1.is_open() && !file2.is_open()){
		cout << "cant open file" << endl;
	}else{
		while(fin1 >> nospkipws >> ch){
			x.push_back(atoi(ch - 0));
			c1++;
		}
		while(fin2 >> noskipws >> ch){
			y.push_back(ch - 0);
			c2++;
		}
		if(c1 > c2){
			//pooleli siin
		}
	}
}

vector<int>* addVec(vector<int>* x, vector<int>* y){
	reverse(*x.begin(),*x.end());
	reverse(*y.begin(),*y.end());
	vector<int> ret;
	int carry{};
	int temp{};
	for(int i = 0; i < *x.size; i++){
		if(i < *y.size())
			temp = *(x+i) + *(y+i) + carry;
			carry = temp % 10;
			temp -= carry;
			temp = (temp / 10) % 10;
			ret.push_back(temp)
		}else{
			ret.push_back(*(x+i));
		}
	}
	reverse(ret.begin(),ret.end());
	vector<int> *p = ret;
	return p;

}
#endif
