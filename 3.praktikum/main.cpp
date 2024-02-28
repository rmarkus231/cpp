#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ranges>
using namespace std;

void tagurpidi(vector<string> massiiv){
	size_t suurus= massiiv.size();
	string temp{};
	reverse(massiiv.begin(),massiiv.end());
	for(auto &el : massiiv){
		ranges::reverse(el);
	}
	for(auto &el : massiiv){
		cout << el << endl;
	}
}

int main(){
	vector<string> list{"kaks","kolm","neli"};
	tagurpidi(list);
	return 0;
}
