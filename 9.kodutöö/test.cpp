#include <vector>
#include <list>
#include <deque>
#include <iostream>
#include <string>

#include "kodu9.h"

using C1 = std::vector<int>;
using C2 = std::list<int>;
using C3 = std::deque<int>;
 
template<typename T>
concept Yl1 = requires(T &t) {
    { yhenda(t, t, t) } -> std::same_as<void>;
};
 
static_assert(Yl1<C1>);
static_assert(Yl1<C2>);
static_assert(Yl1<C3>);
 
template<typename T>
concept Yl2 = requires(T &t, std::ostream &os) {
    { tryki(t, os) } -> std::same_as<decltype(os)>; // std::ostream&
};
 
static_assert(Yl2<C1>);
static_assert(Yl2<C2>);
static_assert(Yl2<C3>);
 
template<typename T>
concept Yl3 = requires(T &t1, T &t2) {
    { operator<(t1, t2) } -> std::same_as<bool>;
};
 
static_assert(Yl3<C1>);
static_assert(Yl3<C2>);
static_assert(Yl3<C3>);
 
template<typename T>
concept Yl4 = requires(T &t) {
    { lisaJaKustuta(t) } -> std::same_as<void>;
};
 
static_assert(Yl4<std::vector<std::string>>);
 
int main() {
    std::cout << "OK\n";
}
