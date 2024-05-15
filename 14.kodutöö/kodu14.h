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
	auto printsum = [v,lisa](size_t i){cout << v[i]+lisa<< " ";};
	for(size_t i = 0; i < v.size();i++){
		printsum(i);
	};
};

template <typename T>
void vali(vector<T>& v,T a,T b, vector<T>& v1){
	auto compare = [a,b](T n){return (a<n && n<b);};
	copy_if(v.begin(),v.end(),inserter(v1.begin(),),compare);
};

#endif
