#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head;
void Insert(int x)
{
	struct node* temp1 = (struct node*)malloc(sizeof(struct node));
	temp1->data = x;
	temp1->next = NULL;
	struct node* temp2 = head;
	if(head==NULL)
	{
		head = temp1;
		return;
	}
	while(temp2->next!=NULL)
	{
		temp2 = temp2->next;
	}
	temp2->next = temp1;

}
void Print()
{
	struct node* temp = head;
	printf("List is: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void Reverse(struct node* p)
{
	if(p->next == NULL){
		head = p;
		return;
	}
	Reverse(p->next);
	struct node* q = p->next;
	q->next = p;
	p->next = NULL;
}
int main()
{
	Insert(1);
	Insert(2);
	Insert(3);
	Print();
	Reverse(head);
	Print();
	return 0;
}
