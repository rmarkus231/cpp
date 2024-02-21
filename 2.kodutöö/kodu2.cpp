#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wnarrowing"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <vector>
#include <sstream>

using namespace std;

void repeatChar(char c, int x){
	for(int i = 0; i < x;i++){
		cout << c;
	}
}

void kolmnurk(){
	int h{};
	char space {' '};
	char star {'*'};
	cin >> h;
	for(int i = 0; i < h; i++){
		repeatChar(space,h-i-1);
		repeatChar(star,i*2+1);
		cout << '\n';
	}
}

long int nthDigit(long int num, long int n){
//cout << "n-1: " << n-1 << '\n';
if(n-static_cast<long int>(1) > 0){
return num / (static_cast<long int>(pow(10,n-1))) % static_cast<long int>(10);
}else{
return num % 10;
}}

void krediitkaart(){
	unsigned long int num{0};
	unsigned long int newNum{0};
	unsigned long int num{0};
	cin << num;
	unsigned long int chk{num % 10};
	unsigned long int len{to_string(num).length()};
	for(int i = len-2; i >= 0; --i){
		
	}
}

void blackjack(){
int start{0};


random_device seed;
mt19937 gen(seed());
uniform_int_distribution<> dis(2,11);
//int random{dis(gen)}


int random{0};
char answer{'a'};
//matrix mis sisaldab infot selle kohta mitu korda seda kaarti on tõmmatud
vector<int> matrix(10);
while(true){
	random = dis(gen);
	//vaata kas on 4x kasutatud
	if(matrix[random-2] < 4){
		start += random;
		matrix[random-2] += 1;
	}else{
		continue;
	}
	cout<<"Tuli kaart: "<<random<<" hetkeseis: "<<start<<endl;
	if(start > 21){
		cout << "Kahjuks kaotasid."<<endl;
		break;
	}else if(start == 21){
		cout << "Võitsid." << endl;	
		break;
	}
	cout<<"Kas soovid kaarti j/e?";
	cin>>answer;
	if(answer == 'j'){
		continue;
	}else{
		cout<<"Lõppseis: "<<start<<endl;
		break;
	}
}}
#if !defined(VPL_TEST)
int main(){
	kolmnurk();
	//tabel(2.2,0.4,4.0);
	//krediitkaart();
	//blackjack();
	return 0;
}
#endif
#pragma warning pop
