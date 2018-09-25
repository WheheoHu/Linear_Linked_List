#include <iostream>
#include "linearlinkedlist.h"

int main() {
	Linear_Linked_List<int> LLList(12);
	LLList.ListInsert(2, 123);
	std::cout << LLList.GetElem(1);
	system("pause");
}