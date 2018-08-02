//double Linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node* prev;
	Node* next;
};

Node* head;

Node* newNode(int x){
	Node* p = new Node();//creating at heap, access alwasy in pointer
	p->data = x;
	p->prev = NULL;
	p->next = NULL;
	return p; // so it gets the value
}

void InsertAtHead(int x){
	Node* n = newNode(x);//creating a new node object at heap using func newNode
	if(head == NULL){
		head = n;
		return;
	}
	head->prev = n;
	n->next = head;
	head = n;
}
void InsertAtTail(int x){

}
void Print(){
	Node* temp = head;
	printf("Forward: ");
	while(temp!=NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void ReversePrint(){
	Node* temp = head;
	if(temp == NULL) return; // empty list
	printf("Backward: ");
	while(temp->next!=NULL){
		temp = temp->next;
	}
	while(temp!=NULL){
		printf("%d ", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int main(){
	head = NULL;
	InsertAtHead(2);
	InsertAtHead(5);
	InsertAtHead(9);
	InsertAtHead(3);

	Print();
	ReversePrint();

}