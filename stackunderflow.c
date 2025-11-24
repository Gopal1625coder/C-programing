#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1) 
    printf("Stack Underflow! Cannot push %d\n",value);
    else {
        stack[++top]= value ;
        printf ("%d pushed to stack\n",value);
    }
}
void pop(0) { 
    if(top==-1)
    printf("Stack Underflow! No element to pop\n");
    else 
    printf ("%d popped from stack\n",stack[top--]);
