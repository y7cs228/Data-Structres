#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};

struct node* Insert(struct node* head,int x)
{
	struct node* temp1 = (struct node*)malloc(sizeof(struct node));
	temp1->data = x;
	temp1->next = NULL;
	struct node* temp2 = head;
	if(head==NULL)
	{
		head = temp1;
		return head;
	}
	while(temp2->next!=NULL)
	{
		temp2 = temp2->next;
	}
	temp2->next = temp1;
	return head;
}
void Print(struct node* head)
{
	struct node* temp = head;
	if(temp==NULL) return;
	printf("%d ",temp->data);
	Print(temp->next);
}

void ReversePrint(struct node* head)
{
	struct node* temp = head;
	if(temp==NULL) return;
	ReversePrint(temp->next);
	printf("%d ",temp->data);
	
}
int main()
{
	struct node* head = NULL;
	int n;
	head = Insert(head,1);
	head = Insert(head,2);
	head = Insert(head,3);
	printf("List is: ");
	Print(head);
	printf("\n");
	printf("Reversed List is: ");
	ReversePrint(head);
}
