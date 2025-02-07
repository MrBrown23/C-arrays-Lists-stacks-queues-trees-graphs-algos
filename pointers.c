#include <stdio.h>
#include <stdlib.h>

int main(){
    // int var = 21;
    // int * ptr = &var;
    // *ptr += 2;
    // printf("%d\n", var); 
    // printf("%p\n", &var);
    // printf("%p\n", ptr);
    // int a=5;
    // int b=3;
    // printf("a = %d\n", a);
    // printf("b = %d\n", b);
    // swap(&a,&b);
    // printf("a = %d\n", a);
    // printf("b = %d\n", b);
    int *a;
    int length;
    printf("Enter the length of your array: ");
    scanf("%d", &length);
    malloc(length * sizeof(a));
    for (int i=0; i<length; i++)
        a[i] = i;
    for (int i=0; i<length; i++)
        printf("a[%d] = %d\n",i,a[i]);
    free(a);
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}