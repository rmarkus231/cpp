#include "andmed.h"
#include <vector>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
using namespace std;

int* loo_andmed(int x){
	if(x < 1){
		return nullptr;
	}
	int* array = new int[x];
	int* ptr = array;
	for(int i = 0; i < x; i++){
		*(ptr+i) = rand() % 10;
	}
	return ptr;

}

vector<int>* loe_andmed(string* failinimi){
	vector<int>* vec = new vector<int>{};
	ifstream fin(*failinimi,fstream::in);
	string str = "";
	char ch{};
	
	if(!fin){
		return nullptr;
	}
	while(fin >> noskipws >> ch){
		if(ch == ' ' or ch == '\n'){
			try{
				vec->push_back(stoi(str));
				str = "";
			}catch(...){
				cout << str << " : ";
				cout << "read error." << endl;
			}
		}else{
			str += ch;
		}
	}
	return vec;
}

void tootle_andmeid(int* arr, int n){
	if(arr != nullptr){
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += *(arr+i);
			*(arr+i) *= -1;
		}
		float avg = static_cast<float>(sum) / static_cast<float>(n);
		cout << sum << endl;
		cout << avg << endl;
	}
}

void tootle_andmeid_vektoris(vector<int>* vec){
	int sum{};
	for(size_t i = 0;i < vec->size();i++){
		sum += vec->at(i);
	}
	float avg = static_cast<float>(sum) / static_cast<float>(vec->size());
	cout << sum << endl;
	cout << avg << endl;
}

void kustuta_andmed(int* arr, vector<int>* vec){
	delete[] arr;
	delete[] vec;
}
