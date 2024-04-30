#ifndef TOIT_H
#define TOIT_H
#include <string>

class Toit{
	public:
		Toit();
		void setNimi(string);
		void setHind(string);
		string getNimi();
		string getHind();

	private:
		string nimi;
		float hind;
};

#endif
