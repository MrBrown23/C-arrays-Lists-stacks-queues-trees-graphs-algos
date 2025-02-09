#include <stdio.h>
#include <stdlib.h>

#define LIST_LENGTH 70

struct node{
	int value;
	struct node* next;
};

typedef struct node node_t;

void print_list(node_t *head){
	node_t *p = NULL;
	p = head;
	while (p!=NULL)
	{
		printf("%d->",p->value);
		p = p->next;
	}
	printf("NULL\n");
	
}

node_t *create_new_node(int value){
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
}

node_t *insert_at_head(node_t *head, node_t *tmp){
	tmp->next = head;
	head = tmp;
	return head;
}

node_t *get_tail(node_t *head){
	node_t *tmp=head;
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	return tmp;
}

int main(){
	// node_t* n1,*n2,*n3;
	node_t *head = NULL;
	node_t *tmp;
	node_t *tail;
	for(int i=0;i<LIST_LENGTH;i++){
		tmp = create_new_node(i);
		head = insert_at_head(head, tmp);

	}
	
	print_list(head);

	tail = get_tail(head);
	print_list(tail);

	return 0;
}