#ifndef PRAK4_H
#define PRAK4_H
#include <concepts>
#include <filesystem>
#include <fstream>
#include <iostream>
using namespace std;
template <typename T, int N = 10>
T liidaJaPiira(T a, T b){
	return (a+b < N) ? (a+b):N;
}
template <typename T>
void looFailJaKirjuta(filesystem::path asukoht, T elemendid[], size_t arv){
	ofstream outFile(asukoht);
	if(outFile.is_open()){
		for(int i = 0; i < arv; i++){
			outFile << static_cast<string>(elemendid[i]) << endl;
		}
		outFile.close();
	}else{
		cout << "probleem faili loomisega." << endl;
	}
}
#endif
