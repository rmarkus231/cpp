#include "prak4.h"
#include <iostream>
#include <filesystem>

using namespace std;

void testLiidaJaPiira(){
	cout << liidaJaPiira(4, 1) << '\n';
	cout << liidaJaPiira(10, 100) << '\n';
    	cout << liidaJaPiira<int, 0>(0, 1) << '\n';
}

void testWrite(){
	auto asukoht = filesystem::path("elemendid.txt");
	string elemendid[] = {"üks", "kaks", "kolm"};
	looFailJaKirjuta<string>(asukoht, elemendid, 3);
}

int main(){
	//testLiidaJaPiira();
	testWrite();
	return 0;
}
