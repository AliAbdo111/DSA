#include <iostream>
#include <cassert>
using namespace std;

struct Node
{
	int data{};
	Node *next{};
	Node(int data) : data(data) {}
};

class LinkedList
{
private:
	Node *head{};
	Node *tail{};
	int length = 0;

public:
	// void print() {
	// print with while
	// 	Node* temp_head = head;
	// 	while(temp_head != nullptr) {
	// 		cout<<temp_head->data<<" ";
	// 		temp_head = temp_head->next;
	// 	}
	// 	cout<<"\n";
	// }
	void print()
	{
		// print with for loop
		for (Node *tem_head = head; tem_head; tem_head = tem_head->next)
		{
			cout << tem_head->data;
			cout << "\n";
		}
	}

	// Node* get_nth(int value)
	// {
	// 	int cnt=0;
	// 	for(Node *CUR=head; CUR; CUR=CUR->next) {
	// 		if(++cnt==value)
	// 		return CUR;

	// 		return nullptr;
	// 	}
	// }
	// insert from end

	void insert_end(int value)
	{
		Node *node = new Node(value);
		if (!head)
		{
			head = tail = node;
		}
		else
		{
			tail->next = node;
			tail = node;
		}
	}
	// insert node from head
	void insert_front(int value)
	{
		Node *node = new Node(value);
		if (!head)
		{
			head = node;
		}
		else
		{
			node->next = head;
			head = node;
		}
	}
	// This code has memory leak, as we did not free memory

	void delete_front()
	{
		Node *cur;
		if (head)
		{
			cur = head->next;
			cout << "delete_ from front" << head->data << endl;
			delete head;
			head = cur;
		}
		else
		{
			cout << "the list is empty" << endl;
		}

		;
	}
};

int main()
{

	LinkedList list;
	// list.insert_end (10);
	// list.insert_end (11);
	// list.insert_end (12);
	// list.insert_end (9);
	// list.insert_end (4);
	// list.get_nth(1);
	list.insert_front(10);
	list.insert_front(11);
	list.insert_front(12);
	list.insert_front(13);
	list.print();
	list.delete_front();
	list.delete_front();
	list.delete_front();
	list.delete_front();
	list.delete_front();
	list.delete_front();
	list.print();
	list.insert_front(120);
	list.insert_front(130);
		list.print();
			list.delete_front();
	list.delete_front();
	return 0;
}
