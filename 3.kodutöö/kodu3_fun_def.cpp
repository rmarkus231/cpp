#include "kodu3_fun_dekl.h"
#include <cmath>
#include <string>
#include <fstream>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;

int fun(int num1, int num2){
	return num1+num2;
}

int fun(double num1){
	return round(pow(num1,static_cast<double>(2)));
}

string fun(unsigned int num1, string word){
	string ret{""};
	for(unsigned int i = 0; i < num1; i++){
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
	}else if(kmi < static_cast<double>(30) && kmi >= static_cast<double>(25)){
		return "ülekaal";
	}else if(kmi < static_cast<double>(25) && kmi >= static_cast<double>(19)){
		return "normaalkaal";
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
		ofstream outFile("tulemused.txt");
		if(outFile.is_open()){
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
				outFile << rowSum/count << endl;
				count = 0;
				rowSum= 0;
			}
			outFile << static_cast<double>(totalSum);
			outFile.close();
		}else{
			cout << "Probleem faili loomisega." << endl;
		}
	}
}


string otsi_mustrit(int& argc, char* argv[]){
	string otsitav = "";
	int loc{};
	string temp;
	string comp;
	stringstream ss;
	for(int i = 1; i < argc;i++){
		loc = static_cast<string>(argv[i]).find("-otsi=");
		temp = static_cast<string>(argv[i]);
		if(static_cast<string>(argv[i]).find("-otsi=") != string::npos){
			otsitav = temp.substr(loc+6,temp.size()-6);
		}else{
			comp += temp + " ";	
		}
	}
	if(otsitav == ""){
		return "Mustrit ei ole olemas.";
	}else if(comp.find(otsitav) != string::npos){ 
		ss << "Otsitav '" << otsitav << "' leiti." << endl;;
		return ss.str();
	}else{
		ss << "Otsitavat '" << otsitav << "' ei leitud." << endl;
		return ss.str();
	}
}

