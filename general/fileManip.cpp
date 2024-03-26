#include "fileManip.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string>* readRow(string filename){
	string row{};
	vector<string>* ret = new vector<string>;
	fstream file(filename);
	if(!file.is_open()){
		cout << "File not found.\nExiting.\n";
		exit(0);
	}else{
		while(getline(file,row)){

			ret->push_back(row);
		}
	}
	return ret;
};

vector<int>* charByDelim(string* failinimi){
	vector<int>* vec = new vector<int>{};
	ifstream fin(*failinimi,fstream::in);
	string str = "";
	char ch{};
	
	if(!fin){
		return nullptr;
	}
	while(fin >> noskipws >> ch){
		// ' ' is the delimiter
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
};

int main(){
	string file("testDelim.txt");
	string *fileP = &file;
	vector<string>* rr = readRow(file);
	vector<int>* cbd = charByDelim(fileP);

	cout << rr->at(1) << endl;
	cout << cbd->at(8) << endl;

	return 0;
}
