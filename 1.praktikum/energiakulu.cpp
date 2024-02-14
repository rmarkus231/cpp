#include <iostream>
using namespace std;

int main(){
float kaal{};
float min{};
cout << "Sisesta kaal: " << endl;
cin >> kaal;
cout << "Sisesta aeg minutites: " << endl;
cin >> min;

cout << "Tegevus" << '\t'<<"Aeg min"<<'\t'<<"Kulutatud kcal"<<endl;
cout << "Kõndimine"<<'\t'<<min<<'\t'<<min / 60 * kaal* 4 << endl;
cout << "Treppidel käimine"<<'\t'<<min<<'\t'<<min / 60 * kaal* 5.5 << endl;
cout << "Ujumine"<<'\t'<<min<<'\t'<<min / 60 * kaal* 10 << endl;
cout << "Korvall"<<'\t'<<min<<'\t'<<min / 60 * kaal* 8 << endl;
return 0;
}
