#include <iostream>
using namespace std;

int main(){
int num;
cin >> num;
//viimane number
int n1 = num % 10;
cout << n1 << endl;
//bitshift paremale
int n2 = num>>1;
cout << n2 << endl;
//nihutab tulemuse 2x vasakule
int n3 = n2<<2;
cout << n3 << endl;
return 0;
}

