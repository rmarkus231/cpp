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

void krediitkaart(){
	unsigned long int num{0};
	unsigned long int temp{0};
	cin >> num;
	unsigned long int len{to_string(num).length()};
	unsigned int sum{0};
	vector<int> numVec(len+2);
	//teeb number vektoriks
	for(int i = len-1; i >= 0; --i){
		numVec[len-i] = static_cast<unsigned long int>( (num / static_cast<unsigned long int>(pow(10,i)) ) ) % static_cast<unsigned long int>(10);
			//cout << len-i-1 << ":" << numVec[len-i] << '\n';
	}
	unsigned int chk{numVec[len-1]};
	for(int i = 1; i <= len-1;i++){
		if(i % 2 == 0){
			temp = numVec[i]*2;
			//check if 1 char long nr
			if(!(temp >= 0 && temp < 10)){
				temp = (temp % 10 + ((temp - temp % 10)/10));
			}
			sum += temp;
		}else{
			temp = numVec[i];
			sum += temp;
		}
		//cout << " i: "<< i << ", temp: " << temp << '\n';
	}
	//cout << "sum: " << sum <<", calc: " << (10-(sum%10)) << ", chk: " << numVec[len] << '\n';
	if((10-(sum%10)) == num%10){
		cout << "korrektne" << '\n';
	}else{
		cout << "vale" << '\n';
	}
}

void blackjack(){
	int start{0};
	random_device seed;
	mt19937 gen(seed());
	uniform_int_distribution<> dis(2,11);
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
	}
}
#if !defined(VPL_TEST)
int main(){
	//unsigned long int x{17893729974};
	//kolmnurk();
	//tabel(2.2,0.4,4.0);
	krediitkaart();
	//blackjack();
	return 0;
}
#endif
#pragma warning pop
