#ifndef LLIST_NODE_H
#define LLIST_NODE_H
#include <iostream>
using namespace std;

template <class T>
class LList;

template <class T = int>
class ListNode
{
	friend class LList<T>;

public:
	ListNode(T);

private:
	T data;
	ListNode* next;

	friend ostream& operator<<(ostream& out, const ListNode& ln)
	{
		out << ln.data;
		return out;
	}
};

template <class T>
ListNode<T>::ListNode(T _data)
{
	data = _data;
	next = nullptr;
}


#endif