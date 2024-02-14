#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
	double r{};
	cin >> r;
	cout << "ringi pindala: " << r*M_PI*M_PI<<'\n';
	cout << "ringi ümbermõõt: "<< r*2*M_PI<<'\n';
	cout << "Raadius 2x väiksem kui: " << r/sqrt(2) << '\n';

	return 0;
}
