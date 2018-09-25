#pragma once
#include <iostream>


template<class T>
class Linear_Linked_List
{
public:
	Linear_Linked_List();
	Linear_Linked_List(int n);
	~Linear_Linked_List() {DestoryList()};
	void InitList(T firstelem);
	void DestoryList(); 
	bool ListEmpty();
	int ListLength();
	T GetElem(int location);
	int locateElem(T elem);
	void ListInsert(int location, T elem);
	int ListDelete(int location, T& elem);

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
inline Linear_Linked_List<T>::~Linear_Linked_List()
{
	DestoryList();
}

template<class T>
inline void Linear_Linked_List<T>::InitList(T firstelem)
{
	head = new Node(firstelem);
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

template<class T>
inline bool Linear_Linked_List<T>::ListEmpty()
{
	return(head == NULL);
}

template<class T>
inline int Linear_Linked_List<T>::ListLength()
{
	int listlenght = 0;
	T *p = head;
	while (p!=NULL)
	{
		p = p->next;
		listlenght++;
	}
	return listlenght;
}

template<class T>
inline T Linear_Linked_List<T>::GetElem(int location)
{
	T *p = head;
	for (int i = 0; i < location&&p->next!=NULL; i++)
	{
		p = p->next;
	}
	return p->data;
}

template<class T>
inline void Linear_Linked_List<T>::ListInsert(int location, T elem)
{
	T InsertNode = Node(elem);
	if (location==1)
	{
		InsertNode.next = head;
	}
	if (location==ListLength())
	{
		T *lastNode = head;
		for (int  i = 0; i < ListLength(); i++)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = &InsertNode;
	}
	T *PreNode = head;
	for (int  i = 0; i < location; i++)
	{
		PreNode=PreNode->next;
	}
	 InsertNode.next = PreNode->next;
	 PreNode->next = InsertNode;
}

template<class T>
inline int Linear_Linked_List<T>::ListDelete(int location, T & elem)
{
	T *deleteNode = head;
	if (location==1)
	{
		elem = deleteNode.data;
		free(head);
		head = deleteNode->next;
		return 1;
	}
	for (int i = 0; i < location-1; i++)
	{
		deleteNode = deleteNode->next;
	}
	T *tempNode = deleteNode;
	
	elem = deleteNode->next.data;
	free(tempNode);
	deleteNode->next == deleteNode->next->next;
	return 1;
}
