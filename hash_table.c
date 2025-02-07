#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
    char name[MAX_NAME];
    int age;
}person;

person * hash_table[TABLE_SIZE];

unsigned int hash(char *name){
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    for(int i=0;i<length; i++){
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}

int main(){
    printf("Jacob => %u\n", hash("Jacob"));
    printf("Natalie => %u\n", hash("Natalie"));
    printf("Shon => %u\n", hash("Shon"));
    printf("Jack => %u\n", hash("Jack"));
    printf("Jake => %u\n", hash("Jake"));
    printf("Ron => %u\n", hash("Ron"));
    return 0;

}