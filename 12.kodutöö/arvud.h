#ifndef ARVUD_H
#define ARVUD_H
using namespace std;

#include <iostream>
#include <cmath>

bool isPrime(int);
int nthPrime(int);

class MinuTaisarv{
	public:
		MinuTaisarv();
		MinuTaisarv(int);
		int getArv();
		void setArv(int);
	
		friend ostream& operator<<(ostream& os, const MinuTaisarv& x){
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
		Algarv& operator++(){
			++val;
			return *this;
		};
		void operator++(int){
			//cout << "in ++" << endl;
			while(true){
				++(*this);
				if(isPrime(val)){
					break;
				};
			};
			mitmes = nthPrime(val);
		};


		Algarv& operator--(){
			--val;
			return *this;
		};
		void operator--(int){
			//cout << "in ++" << endl;
			if(val <= 2){		
			};
			while(true){
				++(*this);
				if(isPrime(val)){
					break;
				};
			};
			mitmes = nthPrime(val);
		};
		friend ostream& operator<<(ostream& os, const Algarv& x){
	    		os <<"arv "<< x.val << " on "<<x.mitmes<<". algarv";
		    	return os;
		};
	private:
		int mitmes;
		int val;
};

int loeArv(int);
#endif
