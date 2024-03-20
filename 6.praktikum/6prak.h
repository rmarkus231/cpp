#ifndef 6PRAK_H
#define 6PRAK_H
#include <string>
#include <iostream>
using namespace std;

template <typename T>
class linkedList{
	private:
		struct link{
			T value;
			Link* prev;
			Link* next;
			Link();
			Link(T val) : m_value(val);
		}
		link* first_el;
	public:
		linkedList(size_t);
		~linkedList();
		string getElement();
		T* getJargmine();
		void append(T);
		void erase(size_t index);
		size_t find(T);
		size_t size();
		T& operator[](size_t index);
		friend osteam& operator<<(ostram& out, const linkedList<T>& list){
			out << list.first_el-value;
			return out;
		};
};



template <typename T>
linkedList<T>::linkedList(size_t init){
	if(size_t > 0){
		first_el = new Link();
		Link* current = first_el;
		for(size_t i = 0; i < init;i++){
			current->next = new Link();
			current->next->prev = current;
		}
	}else{
		first_el = nullptr;
	}
};

template <typename T>
linkedList<T>::~linkedList(){
	Link* current = first_el;
	Link* toDel;
	while(current != nullptr){
		toDel = current;
		current = current->next;
		delete toDel;
	}
};

#endif
