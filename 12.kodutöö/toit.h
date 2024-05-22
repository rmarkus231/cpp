#ifndef TOIT_H
#define TOIT_H
#include <string>
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Toit{
	public:
		Toit();
		Toit(string, float);
		void setNimi(string);
		void setHind(float);
		string getNimi();
		virtual float getHind();

		auto operator<=>(Toit&);
		friend ostream& operator<<(ostream& os, const Toit& x){
	    		os << x.nimi << ":´," << x.hind;
		    	return os;
		};
	private:
		string nimi;
		float hind;
};

class KampaaniaToit : public Toit{
	public:
		KampaaniaToit();
		KampaaniaToit(string, float, int);
		float getHind();

		auto operator<=>(KampaaniaToit&);
		friend ostream& operator<<(ostream& os, const KampaaniaToit& x){
			auto xn = x;
	    		os << xn.getNimi() << "," << xn.getHind() << "," << xn.allahindlus << "%";
		    	return os;
		};
	private:
		int allahindlus;
};


float loe_toidud(string, vector<unique_ptr<Toit>>);
#endif
