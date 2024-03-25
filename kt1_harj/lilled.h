#ifndef LILLED_H
#define LILLED_H
#include <string>
#include <concepts>
#include <algorithm>
#include <fstream>
#include <iostream>
template <typename T> requires integral<T> || floating_point<T>
void lilled(T x, string filename){
	T rc{};
	T gc{};
	T kc{};
	string row{};


	fstream file(filename);
	if(!file.is_open()){
		cout << "File not found.\nExiting.\n";
		exit(0);
	}else{
		while(getline(file,row)){
			//removes newline from string
			//row.erase(remove(str.begin(),str.end(),'\n'),row.cend());
			//if(row == "roos"){
			//}else if(row == "gerbera"){
			//}else if(row)
			if(row[0]=='r' || row[0]=='R'){
				rc += 1;
			}else if(row[0]=='g' || row[0]=='G'){
				gc += 1;
			}else if(row[0]=='k' || row[0]=='K'){
				kc += 1;
			}
		}
		cout << "Lillede arvud: roos " << rc << ", gerbera "<<gc <<", kalla " << kc << endl;
		T sum = rc * static_cast<T>(3) + gc * static_cast<T>(4) + kc * static_cast<T>(5);
		if(sum < x){
			cout<<x<<" eurost piisab lillede ostmiseks (tegelik summa on "<<sum<<" eurot)" <<endl;
		}else{
			cout<<x<<" eurost ei piisa lillede ostmiseks (tegelik summa on "<<sum<<" eurot)"<<endl;
		}
	};
};
#endif
