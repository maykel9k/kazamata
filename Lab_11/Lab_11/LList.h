#ifndef LLIST_H
#define LLIST_H

#include <iostream>
#include <fstream>
using namespace std;
#include "LListNode.h"
#include "Buntownik.h"

template <class T = int>
class LList
{
public:
	LList();
	~LList();
	void insertEnd(T);
	bool isEmpty() const;
	void insertBegin(T);
	void insertSorted(T _data);
	void fromFile(string file_name);

	friend ostream& operator<<(ostream& out, const LList& l)
	{
		l.print(out);
		return out;
	}

protected:
	ListNode<T> *head;
	ListNode<T> *tail;
	ostream& print(ostream&) const;
};

template <class T>
LList<T>::LList()
{
	head = nullptr;
	tail = nullptr;
}

template <class T>
LList<T>::~LList()
{
	if (!isEmpty())
	{
		ListNode<T> *current = head;
		ListNode<T> *temp;

		while (current != tail)
		{
			temp = current;
			current = current->next;
			delete temp;
		}
		delete current;
	}
}

template <class T>
void LList<T>::insertEnd(T _data)
{
	if (isEmpty())
	{
		ListNode<T> *new_node = new ListNode<T>(_data);
		head = new_node;
		tail = new_node;
		tail->next = head;
	}
	else
	{
		ListNode<T> *new_node = new ListNode<T>(_data);
		tail->next = new_node;
		tail = new_node;
		tail->next = head;
	}
}

template <class T>
bool LList<T>::isEmpty() const
{
	if (head == nullptr && tail == nullptr)
		return 1;
	else
		return 0;
}

template <class T>
ostream& LList<T>::print(ostream& out) const
{
	if (isEmpty())
	{
		cout << "Lista jest pusta" << endl;

	}
	else
	{
		ListNode<T> *current = head;

		out << "Zawartosc listy: " << endl;
		while (current != tail)
		{
			out << current->data << ' ';
			current = current->next;
		}
		out << current->data << endl;
	}
	return out;
}

template <class T>
void LList<T>::insertBegin(T _data)
{
	if (isEmpty())
	{
		ListNode<T> *new_node = new ListNode<T>(_data);
		head = new_node;
		tail = new_node;
		tail->next = head;
	}
	else
	{
		ListNode<T> *new_node = new ListNode<T>(_data);
		new_node->next = head;
		tail->next = new_node;
		head = new_node;
	}
	return;
}

template <class T>
void LList<T>::insertSorted(T _data)
{
	return;
}

//template <class T>
//void LList<T>::fromFile(string file_name)
//{
//	ifstream wej(file_name);
//	if (!wej) 
//	{
//		cout << "Brak pliku?" << endl;
//		return;
//	}
//
//	char ch;
//	while (wej.get(ch))
//		insertEnd((T)ch);
//
//	wej.close();
//}

//template<>
//void LList<Buntownik>::fromFile(string file_name)
//{
//	ifstream wej(file_name);
//	if (!wej) 
//	{
//		cout << "Brak pliku?" << endl;
//		return;
//	}
//
//	string linia, imie;
//	char ch;
//	while (getline(wej, linia))
//	{
//		imie += ch;
//		Buntownik b(imie);
//		wej >> b.idx;
//	}
//
//	wej.close();
//}

#endif