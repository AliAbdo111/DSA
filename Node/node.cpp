#include <iostream>
#include <cassert>
using namespace std;


struct Node {
int data {} ; 
Node* next{};
Node(int data) :data(data){};
}; 

// display using loop //////////////////////////////////////////////////////////////////
// void Display(Node *head)
// {
// 	while(head!=nullptr){
// 		cout<<head->data<<endl; 
// 		head=head->next;
// 	}
// };
////////////////display uing recursively////////////////////////////////


void Display(Node *head)
{
	if(head==nullptr){
		return;
	}
	Display(head->next);
	cout <<head->data<<endl;
}
int main() {

	// Create 4 objects and set data
Node* one=new Node(1);
Node* two= new Node(2);
Node* three= new Node(3);

	// Set 4 links
one->next=two;
two->next=three;
three->next=nullptr;

Display(one);
	// Output is 15 for all of them
// cout<<one<<endl;       				 //address node one 
// cout<<one->data<<endl;				//data in node one 
// cout<<one->next<<endl;				//address node two 
// cout<<one->next->data<<endl;		//address node three
// cout<<one->next->next<<endl;   		//data in node two 
// cout <<one->next->next->data<<endl;	//data node three  node

	/*
	 	0x23f9c20 0x7ffdea6fa4e8 0x23f9c40 0x23f9c28
		0x23f9c40 0x7ffdea6fa4f0 0x23f9c60 0x23f9c48
		0x23f9c60 0x7ffdea6fa4f8 0x23f9c80 0x23f9c68
		0x23f9c80 0x7ffdea6fa500 0
	 */

	/*
	int *val1 = new int(6);
	int *val2 = new int(10);
	int *val3 = new int(8);
	int *val4 = new int(15);
	*/




	return 0;
}
