#include <iostream>

using namespace std;

double alg(double n){
	return n/2;
}

double ruutjuur(double num){
	double algo{alg(num)};
	double r{num / algo};
	int i{20};
	while (i){
		algo = (algo+r) / 2;
		r = num / algo;
		i--;
	}
	return algo;
}

int main(){
	double x;
	cout << "anna täsarv: " << '\n';
	cin >> x;
	cout << ruutjuur(x) << '\n';
	return 0;
}
