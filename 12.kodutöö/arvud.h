#ifndef ARVUD_H
#define ARVUD_H
using namespace std;

#include <iostream>
#include <cmath>

bool isPrime(int);
int nthPrime(int);

template <MinuTaisarv T, Algarv T>
T loeArv(int x){
	sum = 0;
	for(int i = 0; i < (log10(x)+1);i++){
		sum += (val/pow(10,i))%10;
	};
	if(isPrime(sum)){
		return Algarv(sum);
	}else{
		return MinuTaisarv(sum);
	};
};

class MinuTaisarv{
	public:
		MinuTaisarv();
		MinuTaisarv(int);
		int getArv();
		void setArv(int);
	
		ostream& operator<<(ostream& os, const MinuTäisarv& x){
	    		os << x.val;
		    	return os;
		};
		int operator[](int);
	private:
		int val;
};

class Algarv: public MinuTaisarv{
	public:
		Algarv(int);
		int getMitmes();
		Algarv& operator++(int){
			while(true){
				++val;
				if(isPrime(val)){
					break;
				};
			};
			mitmes = nthPrime(val);
			return *this;
		};
		Algarv& operator--(int){
			if(val <= 2){		
				return *this;
			};
			while(true){
				--val;
				if(isPrime(val)){
					break;
				};
			};
			mitmes = nthPrime(val);
			return *this;
		};
		ostream& operator<<(ostream& os, const MinuTäisarv& x){
	    		os <<"arv "<< x.val " on "<<mitmes<<". algarv";
		    	return os;
		};
	private:
		int mitmes;
};
#endif
