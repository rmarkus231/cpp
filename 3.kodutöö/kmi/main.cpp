#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double kehamassiindeks(double pikkus_m, int kaal){
	return static_cast<double>(kaal)/pow(pikkus_m,2);
}

string hinnang(double kmi){
	if(kmi >= static_cast<double>(30)){
		return "rasvumine";
	}else if(kmi < static_cast<double>(30) && kmi >= static_cast<double>(26)){
		return "ylekaal";
	}else if(kmi < static_cast<double>(26) && kmi >= static_cast<double>(20)){
		return "ideaalkaal";
	}else{
		return "alakaal";
	}
}

int main(){
	string in1{};
	string in2{};
	cin >> in1;
	cin >> in2;

	double pikkus = stod(in1);
	int kaal = stoi(in2);

	double kmi{kehamassiindeks(pikkus,kaal)};
	cout << "kmi: " << kmi << " hinnang: " << hinnang(kmi) << '\n';
	return 0;
}
