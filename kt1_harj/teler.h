#ifndef TELER_H
#define TELER_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Teler{
	private:
		string mark{};
		int diag{};
		double hind{};
	public:
		Teler();
		Teler(string ,int ,double);
		~Teler();
		int getDiag();
		friend std::ostream& operator<<(std::ostream& os, const Teler& obj){
			os << obj.mark << ", " << obj.diag << "\", "<<obj.hind << "eur";
			return os;
		}

};

Teler* looTeler(string);
vector<Teler*>* loeTelerid(string);
Teler* suurima_diagonaaliga(vector<Teler*>*);
void kustutaTelerid(vector<Teler*>*);

#endif
