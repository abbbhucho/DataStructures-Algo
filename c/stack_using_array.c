#include <stdio.h>
#include <stdlib.h>

struct Stack
{
	int size;
	int top;
	int *data;
};
void createStack(struct Stack *s)
{
	printf("Enter the size of array\n");
	scanf("%d",&s->size);
	s->top = -1;
	s->data = (int *)malloc(s->size*sizeof(int));
	
}
void push(struct Stack *s,int x)
{
	if(s->top == s->size - 1){	printf("Stack Overflow"); return;}
	s->top++;
	s->data[s->top] = x;	
}
int pop(struct Stack *s)
{
	int x = -1;
	if(s->top == -1) {printf("Stack Underflow"); return x;}
	
	x = s->data[s->top];
	s->top--;
	return x;
}
/**
	Finding a given element at a given position
	*/
int peek(struct Stack s,int pos)
//	 Call by value is enough here we are just reading the stack not modifying it
{
	int x;	
	if(s.top - pos + 1 <0){printf("The position is invalid");}
	else
	{
		x = s.data[s.top-pos+1];
	}
	return x;
}
int isEmpty(struct Stack s)
{
	if(s.top == -1)
		return 0;
	else return 1;	
}
int isFull(struct Stack s)
{
	if(s.top == s.size-1)	return 0;
	else return 1;
}
int top(struct Stack s)
{
	return s.data[s.top];
}
void main()
{
	struct Stack st;
	createStack(&st);
	push(&st,4);
	printf("%d\n",top(st));
	push(&st,5);	printf("%d\n",top(st));
	push(&st,6);	printf("%d\n",top(st));
	push(&st,7);	printf("%d\n",top(st));
	push(&st,8);	printf("%d\n",top(st));
	top(st);
}