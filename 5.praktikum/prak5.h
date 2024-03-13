#ifndef PRAK5_H
#define PRAK5_H
using namespace std;
int liida(int x[], int y){
	int sum{};
	for(int i = 0; i < y;i++){
		if(i % 2 == 0 && x[i] % 2 == 0){
			sum+=x[i];
		}
	}
	return sum;
}
int liidaP1(int* x, int y){
	int sum{};
	for(int i = 0; i < y;i++){
		if(i % 2 == 0 && x[i] % 2 == 0){
			sum += x[i];
		}
	}
	return sum;
}
int liidaP2(int* x, int y){
	int sum{};
	for(int i = 0; i < y;i++){
		if(i % 2 == 0 && *(x+i) % 2 == 0){
			sum += *(x+i);
		}
	}
	return sum;

}
int* liida(int* x, int y, int* z){
	for(int i = 0; i < y;i++){
		if(i % 2 == 0 && *(x+i) % 2 == 0){
			*z += *(x+i);
		}
	}
	return z;
}
int& liida(int* x, int y, int& z){
	for(int i = 0; i < y;i++){
		if(i % 2 == 0 && *(x+i) % 2 == 0){
			z += *(x+i);
		}
	}
	return z;
}
#endif
