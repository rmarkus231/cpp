#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wnarrowing"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <random>
#include <vector>

using namespace std;

void kolmnurk(){
int num{0};
char space{' '};
char star{'*'};
cout << "kolmnurga k6rgus" << "\n";
cin >> num;
for(unsigned int i{0};i<=num;i++){
	string x (num-i,space);
	string y (i,star);
	string z (i-1,star);
	cout << x << y;
if(i>1){
	cout << z << '\n';
}else{
	cout << '\n';
}}}

long int nthDigit(long int num, long int n){
//cout << "n-1: " << n-1 << '\n';
if(n-static_cast<long int>(1) > 0){
return num / (static_cast<long int>(pow(10,n-1))) % static_cast<long int>(10);
}else{
return num % 10;
}}

long int sumDigits(long int num){
long int sum{0};
long int len = trunc(log10(num))+1;
//cout <<"num: "<< num <<"|"<<"len: "<<len<< endl;
if(len > 1){
for(int i = 1;i <=len;i++){
	//cout << "adding: " << nthDigit(num,i) << endl;
	sum += nthDigit(num,i);
}}else{
sum = num;
}
//cout << "sum: " << sum << '\n';
return sum;
}

void tabel(double start, double step, double end){
const double C{2.2046};
double S = start;
cout << setw(10) << "Nael" << setw(10) << "kg\n";
cout << string(20,45) << '\n';
while (S <= end){
	cout << setw(10) << S << setw(10) << S/C << '\n';
	S += step;
}}

void krediitkaart(){
long int num;
cin >> num;
//luhn algorythm
long int length{trunc(log10(num))+1};
long int chkInit{nthDigit(num,1)};
long int sum{0};
bool bf{false};

/*debug section
cout << "num: " << num << '\n';
cout << "len: " << length << '\n';
cout << "chkInit: " << chkInit << '\n';
cout << string(10,45) << '\n';
*/

//cout << length << '\n' << chkInit << '\n';
for(int i = length;i > 1; i--){
	//cout << "i: " << i << '\n';
	if(bf){
	sum += sumDigits(nthDigit(num,i)*2);
	bf = false;
	//cout << "num: "<< nthDigit(num,i)<< " " <<"bf: " << bf << " "<< "sumD: " << sumDigits(nthDigit(num,i)*2) << '\n';
	}else{
	sum += sumDigits(nthDigit(num,i));
	bf = true;
	//cout << "num: "<< nthDigit(num,i)<< " " <<"bf: " << bf << " "<< "sumD: " << sumDigits(nthDigit(num,i)) << '\n';
	}
}
//cout << "sum: " << sum << '\n';
long int chk{10-(sum%10)};
//cout << "chk: " << chk << '\n';
if(chk == chkInit){
	cout << "korrektne" << '\n';
}else{
	cout << "vale" << '\n';
}}

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
}}
#if !defined(VPL_TEST)
int main(){
	//kolmnurk();
	//tabel(2.2,0.4,4.0);
	//krediitkaart();
	//blackjack();
	return 0;
}
#endif
#pragma warning pop
