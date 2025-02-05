#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node * create_linked_list(int n);

int main(){
	int length;
	node * head = NULL;
	printf("How Many nodes? ");
	scanf("%d", &length);
	head = create_linked_list(length);
	display_list(head);
	return 0;
}

void display_list(node* head){
	
	node * p;
	p = head;
	while(p!=NULL){
		printf("%d->",p->data);
		p = p->next;
	}
	printf("NULL\n");
}

node * create_linked_list(int n){
	node * head = NULL;
	node * temp = NULL;
	node * p = NULL;
	for(int i=0; i<n ; i++){
		temp = (node*)malloc(sizeof(node));
		printf("Enter the data for node numer: %d ", i);
		scanf("%d", &(temp->data));
		temp->next = NULL;

		if(head == NULL){
			head = temp;
		}
		else{
			p=head;
			while(p->next!=NULL){
				p = p->next;
			}
			p->next = temp;
		}
	}
	return head;
}
