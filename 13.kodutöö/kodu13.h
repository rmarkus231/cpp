#ifndef KODU13_H
#define KODU13_H
#include <exception>
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

class exc :public exception{
	public:
		string msg{};
		exc(string m) : msg{m} {};
	//in this house we hate private variables
};

void täisarvLoop();
int getInput();
void loeMap(map<int,size_t>);

template <typename T>
class NegatiivneDeterminant : public exception{
	public:
		T num{};
		string msg{};
		NegatiivneDeterminant(string s , T n) : num{n}, msg{s} {}
};

template <typename T>
T determinant(T a, T b, T c){
	T temp = b*b - 4*a*c;
	if(temp < 0){
		throw NegatiivneDeterminant<T>("Reaalarvulist lahendit ei leidu",temp);
	}else{
		return temp;
	};
};

void determinantTest();

template <typename T>
vector<T>* ruutvõrrand(T a, T b, T c){
	vector<T>* ret = new vector<T>;
	try{
		T det = determinant(a,b,c);
		cout << det << endl;
		ret->push_back((-b+sqrt(det))/2*a);
		ret->push_back((-b-sqrt(det))/2*a);
	}catch(NegatiivneDeterminant<T>& er){
		cout << "Negatiivne determinant: " << er.num << endl;
		cout << er.msg << endl;
		ret->push_back(0);
		ret->push_back(0);
	};
	return ret;
};

void ruutvõrrandFailist(string);

#endif
