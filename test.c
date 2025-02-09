#include <stdio.h>

int main(){
    int v[] = {1,2,3,4,5};
    int *p;
    p = v;
    for(int i=0; i<(sizeof(v)/sizeof(v[0]));i++){
        printf("%d\n", *(p + i));
    }
    return 0;
}