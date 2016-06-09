/* Balanced Paranthesis checker implementation using stack */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXSIZE 1000

char A[MAXSIZE];
int top=-1;

void Push(char x){
	if(top==MAXSIZE-1){
		printf("Error: stack overflow\n");
		return;
	}
	A[++top] = x;
	//printf("%c",x);
}

void Pop(){
	if(top == -1){
		printf("Error: No element to pop\n");
		return;
	}
	top--;
}

int isEmpty(){
	if(top==-1) return 1;
	else return 0;
}

int ArePair(char opening,char closing){
	if(opening == '(' && closing == ')') return 1;
	else if(opening == '{' && closing == '}') return 1;
	else if(opening == '[' && closing == ']') return 1;
	return 0;
}
void AreBalanced(char s[]){
	int n = strlen(s);
	//printf("length of the string is: %d",n);
	for(int i=0;i<n;i++){
		if(s[i]=='('||s[i]=='['||s[i]=='{'){
			Push(s[i]);	
		}
		else if(s[i]==')'||s[i]==']'||s[i]=='}'){
			if(isEmpty()){
				printf("No\n");
				return;	
			}
			else if(!ArePair(A[top],s[i])){
				printf("No\n");
				return;
			}
			else
				Pop();
				
		}	
	}
	if(isEmpty())	printf("YES\n");
	else printf("No\n");	
}		

int main(){
	int n;
	char s[1000];
	printf("Enter number of expressions: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the expression: ");
		scanf("%s",&s);
		AreBalanced(s);
		top=-1;
		
	}
	return 0;
}
