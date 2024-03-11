#ifndef ARVUTUSED_H
#define ARVUTUSED_H
template <typename T> requires integral<T> || floating_point<T>
T suurim(T*, T*, T*);
template <typename T> requires integral<T> || floating_point<T>
T suurim(T&, T&, T&);
int suurim(int&, int*, int*);
void suurim(int*, int*, int*, int*);
void suurim(int&, int&, int&, int&);
#endif
