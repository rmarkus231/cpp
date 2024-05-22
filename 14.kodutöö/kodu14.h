#ifndef KODU14_H
#define KODU14_H
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

template <typename T>
void liida(vector<T>& v, T& lisa){
	//didnt specify where you wanted me to us the lambda
	auto add = [](vector<T>::iterator i, T l){*i+=l;};
	for(auto it = v.begin() ;it != v.end();++it){
		add(it,lisa);
	};
};

template <typename T>
void vali(vector<T>& v,T a,T b, vector<T>& v1){
	auto compare = [a,b](T n){return (a<=n && n<=b);};
	copy_if(v.begin(),v.end(),inserter(v1,v1.begin()),compare);
};

#endif
