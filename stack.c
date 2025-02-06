#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

int my_stack[STACK_LENGTH];
int top = EMPTY;

bool push(int value){
    if(top>=STACK_LENGTH-1){
    return false;
    }
    top++;
    my_stack[top] = value;
    return true;
}

int pop(){
    if(top == EMPTY)
        return STACK_EMPTY;
    int result = my_stack[top];
    top--;
    return result;
}

int main(){
    push(25);  
    push(13);
    push(50);
    int t;
    while((t= pop())!= STACK_EMPTY){
        printf("%d\n", t);
    } 
    return 0;
}