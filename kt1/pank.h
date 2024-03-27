#ifndef PANK_H
#define PANK_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Ylekanne{
	private:
		uint64_t src;
		uint64_t dst;
		double sum;
	public:
		bool chk;
		Ylekanne(uint64_t,uint64_t,double);
		friend std::ostream& operator<<(std::ostream& os, const Ylekanne& obj){
			os << obj.chk << ":" <<obj.src << "->" << obj.dst << ":"<<obj.sum << " eur";
			return os;
		};
};

class Pank{
	private:
		string name;
		vector<Ylekanne*> log;
	public:
		Pank(string);
		Ylekanne* looYlekanne(uint64_t,uint64_t,double);
		void salvestaLog(Ylekanne*);
		void saabuvYlekanne(Ylekanne*);
		void lopeta();
		void kuva();
		
};
#endif
