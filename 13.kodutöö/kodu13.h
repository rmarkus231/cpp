#ifndef KODU13_H
#define KODU13_H
#include <exception>
#include <string>
using namespace std;

class exc :public exception{
	public:
		string msg{};
		exc(string m) : msg{m} {};
};

void täisarvLoop();
int getInput();
void loeMap(map<int,size_t>):

#endif
