#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)

int mystack[STACK_LENGTH];

int top = EMPTY;

bool push(int value){
    if(top >= STACK_LENGTH - 1)
        return false;
    top++;
    mystack[top] = value;
    return true;
}

int main(){
    return 0;
}