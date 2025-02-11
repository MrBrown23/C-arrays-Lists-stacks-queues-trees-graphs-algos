#include <stdio.h>
#include <stdlib.h>
#include "graph_adj_mat.h"

struct mygraph{
    int numnode;
    bool **edges;
};

graph *create_graph(int numnodes){
    graph *g = malloc(sizeof(graph));
    if(g == NULL){
        return NULL;
    }

    g->numnode = numnodes;

    
}
void destroy_graph(graph *g){

}
void print_graph(graph *g){

}
bool add_edge(graph *g, unsigned int from_node, unsigned int to_node){

}
bool has_edge(graph *g, unsigned int from_node, unsigned int to_node){

}



int main(){
    return 0;
}