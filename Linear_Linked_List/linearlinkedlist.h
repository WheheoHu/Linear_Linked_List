#pragma once
#include <iostream>


template<class T>
class Linear_Linked_List
{
public:
	Linear_Linked_List();
	Linear_Linked_List(int n);
	~Linear_Linked_List() {DestoryList()}
	void InitList(int n);
	void DestoryList(); 
	bool ListEmpty();
	int ListLength();
	T GetElem(int location);
	int locateElem(T elem);
	void ListInsert(int location, T elem);
	void ListDelete(int location, &T elem);

private:
	struct Node {
		         T data;
		         Node * next;
		         Node(const T& d) :data(d), next(NULL) {}	
	};
	Node * head;
};

template<class T>
inline Linear_Linked_List<T>::Linear_Linked_List()
{
	std::cout << "Please initalize list manually!(Use InitList)" << std::endl;
}

template<class T>
inline Linear_Linked_List<T>::Linear_Linked_List(int n)
{
	InitList(n);
}

template<class T>
inline void Linear_Linked_List<T>::InitList(int n)
{
	head = new Node(0);
}

template<class T>
inline void Linear_Linked_List<T>::DestoryList()
{
	Node *p = head;
	while (p)
	{
		Node *q = p;
		delete p;
		q = p;
	}
}
