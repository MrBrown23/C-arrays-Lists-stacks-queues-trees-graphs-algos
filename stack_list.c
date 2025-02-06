#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define EMPTY (-1)
#define STACK_LENGTH 9
#define STACK_EMPTY INT_MIN

int my_stack[STACK_LENGTH];
int top = EMPTY;

bool push(int value){
    if(top == STACK_LENGTH - 1)
        return false;
    top ++;
    my_stack[top] = value;
    return true;
}

int pop(){
    if(top == EMPTY)
        return STACK_EMPTY;
    int value = my_stack[top];
    top--;
    return value;
}

int main(){
    push(55);
    push(66);
    push(77);
    push(88);
    int t;
    while((t = pop()) != STACK_EMPTY){
        printf("%d\n", t);
    }
    return 0;
}