#ifndef KODU4_H
#define KODU4_H
#include <concepts>
#include <vector>
#include <iostream>
#include <string>
#include <type_traits>
using namespace std;
template <typename T, typename V> requires (integral<T> && integral<V>) || (floating_point<T> && floating_point<V>) || (is_same<T, string>::value && is_same<V, string>::value)
T liida(const T& a,const V& b){
	return (a+b);
}
template <int T> 
bool onVahemikus(int a, int b){
	return ((a <= T) && (T <= b)) ? true:false;
}
template <typename T> requires integral<T> || floating_point<T>
class Massiiv{
public:
	Massiiv();
	T getElement(int i);
	bool kasTais();
	bool kasTyhi();
	int getSuurus();
	void print();
	void lisaElement(T el);
	void kustutaElement();
	void asendaElement(T el1, T el2);
	int vabuKohti();
	bool kasSisaldub(T el);
private:
	int loc{-1};
	T mass[100] {0};
};
template <typename T>
Massiiv<T>::Massiiv(){
}
template <typename T>
T Massiiv<T>::getElement(int i){
	if(i > loc){
		return -1111;
	}else{
		return mass[i];
	}
}
template <typename T>
bool Massiiv<T>::kasTais(){
	if(loc == 99){
		return true;
	}else{
		return false;
	}
}
template <typename T>
bool Massiiv<T>::kasTyhi(){
	if(loc == -1){
		return true;
	}else{
		return false;
	}
}
template <typename T>
int Massiiv<T>::getSuurus(){
	return loc+1;
}
template <typename T>
void Massiiv<T>::print(){
	for(int i = 0; i < loc+1;i++){
		cout << mass[i] << ' ';
	}
	cout << endl;
}
template <typename T>
void Massiiv<T>::lisaElement(T el){
	loc++;
	mass[loc] = el;
}
template <typename T>
void Massiiv<T>::kustutaElement(){
	mass[loc] = 0;
	--loc;
}
template <typename T>
void Massiiv<T>::asendaElement(T el1, T el2){
	for(int i = 0; i < loc+1;i++){
		if(mass[i] == el1){
			mass[i] = el2;
		}
	}
}
template <typename T>
int Massiiv<T>::vabuKohti(){
	return 99-loc;
}
template <typename T>
bool Massiiv<T>::kasSisaldub(T el){
	for(int i = 0; i <= loc+1;i++){
		if(mass[i] == el){
			return true;
		}
	}
	return false;
}
#endif
