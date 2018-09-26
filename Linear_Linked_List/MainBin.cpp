#include <iostream>
#include "linearlinkedlist.h"

int main()
{
	Linear_Linked_List<int> LLList(12);
	LLList.ListInsert(2, 23);
	LLList.ListInsert(3, 34);
	LLList.ListInsert(4, 45);
	LLList.ListDelete(2);
	for (int i = 0; i < LLList.ListLength(); i++)
	{
		std::cout << LLList.GetElem(i + 1) << std::endl;
	}



	system("pause");
	return 0;
}