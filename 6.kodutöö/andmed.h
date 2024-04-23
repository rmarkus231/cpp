#ifndef ANDMED_H
#define ANDMED_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int* loo_andmed(int);
vector<int>* loe_andmed(string* failinimi);
void tootle_andmeid(int*, int);
void kustuta_andmed(int*, vector<int>*);
void tootle_andmeid_vektoris(vector<int>*);

class Auto{
	private:
		string mark;
		string energiaklass;
		double kütus;
	public:
		Auto();
		Auto(string,string,double);
		~Auto();
		double kytusekulu();
		friend std::ostream& operator<<(std::ostream& os, const Auto& obj){
			os << obj.mark << ";" << obj.energiaklass << ";" << obj.kütus;
			return os;
		}
};

Auto* looAuto(const string);
vector<Auto*>* loeAutod(const string);
Auto* vähima_kuluga(vector<Auto*>*);
void kustutaAutod(vector<Auto*>*);

#endif
