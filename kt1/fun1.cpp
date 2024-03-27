#include "fun1.h"
#include <string>
using namespace std;

int punkte(string nimed[],int punk[], int s, string str){
	int c{0};
	for(int i = 0; i < s;i++){
		if(nimed[i] == str){c+=punk[i];}
	}
	return c;
};

string parim(string nimed[], int punk[], int s){
	int bs = 0;
	string bn{""};
	int temp{};
	for(int i = 0; i < s; i++){
		temp = punkte(nimed,punk,s,nimed[i]);
		if(temp > bs){
			bs = temp;
			bn = nimed[i];
		}
	}
	return bn;
}
