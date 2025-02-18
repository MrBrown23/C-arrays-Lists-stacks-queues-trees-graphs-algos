#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_players = 0;
    int *players = NULL;

    printf("How many players you want to enter? ");
    scanf("%d", &num_players);

    players = malloc(sizeof(int)*num_players);

    for(int i=0; i<num_players; i++){
        players[i] = (i+1)*3;
    }

    for (size_t i = 0; i < num_players; i++)
    {
        printf("%d\n", players[i]);
    }

    printf("=============================\n");

    num_players ++; 
    
    players = realloc(players, sizeof(int) * num_players);
    players[num_players - 1]=77;

    for (size_t i = 0; i < num_players; i++)
    {
        printf("%d\n", players[i]);
    }

    free(players);

    return 0;
}