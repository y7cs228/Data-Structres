/* Double Linked List Implementation */
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* head;
struct node* GetNewNode(int x){
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
}
void InsertAtHead(int x){
	struct node* newNode = GetNewNode(x);
	if (head==NULL){
		head = newNode;
		return;
	}
	else{
		newNode->next = head;
		head->prev = newNode;
		head = newNode;
	}
}

void Print(){
	struct node* temp = head;
	printf("Forward:");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void ReversePrint(){
	struct node* temp = head;
	if(temp==NULL) return;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	printf("Reverse:");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int main(){
	head = NULL;
	InsertAtHead(1);Print();ReversePrint();
	InsertAtHead(2);Print();ReversePrint();
	InsertAtHead(3);Print();ReversePrint();
}
