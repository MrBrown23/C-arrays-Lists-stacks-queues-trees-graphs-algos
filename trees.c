#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
} node;

bool search_binary_tree(node *root, int value){
    if(root == NULL)
        return false;
    else{
        if(root->data == value)
            return true;

        if(value < root->data)
            return search_binary_tree(root->left, value);
        else 
            return search_binary_tree(root->right, value);
    }
    

}

int main(){
    node *root = malloc(sizeof(node));
    node *n1 = malloc(sizeof(node));
    node *n2 = malloc(sizeof(node));
    node *n3 = malloc(sizeof(node));
    node *n4 = malloc(sizeof(node));
    node *n5 = malloc(sizeof(node));
    node *n6 = malloc(sizeof(node));
    node *n7 = malloc(sizeof(node));
    
    root->left = n1;
    root->right = n2;
    
    n1->left = n3;
    n1->right = NULL;
    
    n3->left = NULL;
    n3->right = NULL;
   
    n2->left = n4;
    n2->right = n5;

    n4->left = NULL;
    n4->right = n6;

    n5->left = NULL;
    n5->right = n7;

    n6->left = NULL;
    n6->right = NULL;

    n7->left = NULL;
    n7->right = NULL;

    root->data = 7;
    n1->data = 5;
    n2->data = 10;
    n3->data = 2;
    n4->data = 8;

    n5->data = 11;
    n6->data = 9;
    n7->data = 12;

    int num;
    scanf("%d", &num);

    if(search_binary_tree(root, num)) 
        printf("True");
    else
        printf("False");
    printf("\n");
    free(root);
    free(n1);
    free(n2);
    free(n3);
    free(n4);



    return 0;
}