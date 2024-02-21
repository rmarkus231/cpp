#include <iostream>

using namespace std;

double koguhinne(double got, double max){
	return got / max * 100.0;
}

int main(){
	int ix{0};
	double max{0};
	double got{0};
	double temp{0};
	cout << "mitu tulmust? " << '\n';
	cin >> ix;
	for(int i = 0; i < ix; i++){
		cout << i <<". ül eest saadud: " << '\n';
		cin >> temp;
		got += temp;
		cout << i <<". ül max:"<< '\n';
		cin >> temp;
		max += temp;
	}
	cout << "kogusumma on " << static_cast<int>(got) << ' ' << static_cast<int>(max) << "-st ehk "<< koguhinne(got,max)<<'%'<<'\n';
	return 0;
}

