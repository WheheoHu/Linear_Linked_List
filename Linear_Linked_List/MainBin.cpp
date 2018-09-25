#include <iostream>
#include "linearlinkedlist.h"

int main()
{
	Linear_Linked_List<int> LLList(12);
	LLList.InitList(12);
	LLList.ListInsert(2, 123);
	LLList.ListInsert(3, 23);
	LLList.ListInsert(1, 111);
	std::cout << LLList.GetElem(1) << std::endl;
	std::cout << LLList.ListLength();
	int back;
	LLList.ListDelete(1, back);
	std::cout << back << " " << LLList.ListLength() << std::endl;
	system("pause");
	return 0;
}