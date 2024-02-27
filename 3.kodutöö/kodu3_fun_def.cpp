#include "kodu3_fun_dekl.h"
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
#include <cstdlib>
using namespace std;

int fun(int num1, int num2){
	return num1+num2;
}

int fun(double num1){
	return round(pow(num1,static_cast<double>(2)));
}

string fun(unsigned int num1, string word){
	string ret{""};
	for(int i = 0; i <= num1; i++){
		ret += word;
	}
	return ret;
}


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

void andmed_failist(string filename){
	//
	fstream file(filename);
	if(!file.is_open()){
		cout << "File not found.\nExiting.\n";
		exit(0);
	}else{
		//file is opened succesfully
		string row{};
		vector<double> nums;
		int loc{};
		vector<vector<double>> matrix;
		while(getline(file,row)){
			while(row.find(";;") != string::npos){
				loc = row.find(";;");
				nums.push_back(stod(static_cast<string>(row.substr(0,loc))));
				row.erase(0,loc+2);
			}
			nums.push_back(stod(static_cast<string>(row.substr(0,row.size()))));
			matrix.push_back(nums);
			nums.clear();
		}
		/*
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
		*/
		double rowSum{};
		double totalSum{};
		double count{};
		for(size_t i = 0; i < matrix.size();i++){
			for(size_t j = 0; j < matrix[i].size();j++){
				//cout << matrix[i][j] << " ";
				rowSum += matrix[i][j];
				totalSum += matrix[i][j];
				count++;
			}
			cout << rowSum/count << endl;
			count = 0;
			rowSum= 0;
		}
		cout << totalSum << endl;
	}
}
