//#include "LList.h"
//
//LList::LList()
//{
//	head = nullptr;
//	tail = nullptr;
//}
//
//LList::~LList()
//{
//	if ( !isEmpty() ) 
//   {    
//      ListNode *current = head;
//      ListNode *temp;
//
//	  while ( current != tail ) 
//      {  
//         temp = current;
//         current = current->next;
//         delete temp;
//      }
//	  delete current;
//   }
//}
//
//void LList::insertEnd(int _data)
//{
//	if(isEmpty()) 
//	{
//		ListNode *new_node = new ListNode(_data);
//		head = new_node;
//		tail = new_node;
//		tail->next = head;
//	}
//	else 
//	{
//		ListNode *new_node = new ListNode(_data);
//		tail->next = new_node; 
//		tail = new_node;
//		tail->next = head;
//	}
//}
//
//bool LList::isEmpty() const
//{
//	if (head == nullptr && tail == nullptr)
//		return 1;
//	else
//		return 0;
//}
//
//ostream& operator<<(ostream& out, const LList& l)
//{
//	l.print(out);
//	return out;
//}
//
//ostream& LList::print(ostream& out) const
//{
//	if(isEmpty())
//	{
//		cout << "Lista jest pusta" << endl;
//	
//	}
//	else
//	{
//		ListNode *current = head;
//
//		out << "Zawartosc listy: " << endl;
//		while(current != tail)
//		{
//			out << current->data << ' ';
//			current = current->next; 
//		}
//		out << current->data << endl;
//	}
//	return out;
//}
//
//void LList::insertBegin(int _data)
//{
//	if (isEmpty())
//	{
//		ListNode *new_node = new ListNode(_data);
//		head = new_node;
//		tail = new_node;
//		tail->next = head;
//	}
//	else
//	{
//		ListNode *new_node = new ListNode(_data);
//		new_node->next = head;
//		tail->next = new_node;
//		head = new_node;
//	}
//	return;
//}
