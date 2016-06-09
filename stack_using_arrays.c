/* Stack Implementation using Arrays */

#include<stdio.h>
#define MAXSIZE 101

int A[MAXSIZE];
int top=-1;

void Push(int x){
	if(top==MAXSIZE-1){
		printf("Error: stack overflow\n");
		return;
	}
	A[++top] = x;
}

void Pop(){
	if(top == -1){
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}

int Top(){
	return A[top];
}

void Print(){
	int i;
	printf("Stack: ");
	for(i=0;i<=top;i++)
		printf("%d ",A[i]);
	printf("\n");
}

int main(){
	
	Push(1);Print();
	Push(2);Print();
	Push(3);Print();
	Pop();Print();
	Pop();Print();
	Push(4);Print();
	return 0;
}

