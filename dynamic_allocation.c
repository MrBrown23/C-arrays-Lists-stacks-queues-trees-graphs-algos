#include <stdio.h>
#include <stdlib.h>


int main(){
    int num_player = 0;
    int *players_list = NULL;

    printf("How many players you want to enter: ");
    scanf("%d", &num_player);

    players_list = malloc(sizeof(int) * num_player);
    for(int i = 0; i< num_player; i++){
        printf("Enter the element number %d: ", i + 1);
        scanf("%d", (players_list + i));
    }

    for(int i = 0; i< num_player; i++){
        printf("The element number: %d\n", *(players_list + i));
    }

    return 0;



}