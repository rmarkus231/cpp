#ifndef LAULUD_H
#define LAULUD_H
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <int T>
void laulud(string failinimi, string name){
	vector<string> vec;
	ifstream fin(failinimi,fstream::in);
	string row{};
	int temp{};
	string sTemp{};
	string sTemp2{};
	int rowC{0};
	int fc{0};
	if(fin){
		while(getline(fin,row)){
			if(rowC >= T){break;}
			temp = row.find(" ");
			sTemp += row.substr(0,temp);
			sTemp += " ";
			sTemp2 += row.substr(temp+1);
			//cout << sTemp2 << endl;
			if(sTemp2 == name){
				fc += 1;
				sTemp += sTemp2;
				vec.push_back(sTemp);
			}

			sTemp2 = "";
			sTemp = "";
			rowC+=1;
		}
		for(size_t i = 0; i < vec.size(); i++){
			cout << vec[i] << endl;
		}
		cout << name << " esines " << fc << " korda." << endl;
	}
};
#endif
