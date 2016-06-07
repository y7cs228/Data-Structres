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
void Delete(int n)
{
	struct node* temp1 = head;
	if(n==1)
	{
		head = temp1->next;
		free(temp1);
		return;
	}
	for(int i=0;i<n-2;i++)
		temp1 = temp1->next;
	struct node* temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
	return;
}
int main()
{
	head = NULL;
	int n;
	Insert(1);
	Insert(2);
	Insert(3);
	Print();
	printf("Enter a position to delete:");
	scanf("%d",&n);
	Delete(n);
	Print();
}
