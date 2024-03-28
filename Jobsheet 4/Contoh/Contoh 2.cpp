#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};

void push(struct Node **head_ref, int new_data){
	// 1. Mengalokasikan Node
	struct Node *new_node = new Node();
	// 2. Memasukkan data
	new_node->data = new_data;
	if((*head_ref) == NULL){
		(*head_ref) = new_node;
	}else{
	// 3. jadikan next dari new_node sebagai head dan prev sebagai NULL
	new_node->next = (*head_ref);
	new_node->prev = NULL;
	// 4. ubah prev dari head menjadi new_node
	(*head_ref)->prev = new_node;
	// 5. pindahkan posisi head ke new_node
	(*head_ref) = new_node;
	}
}

void insertAfter(struct Node *prev_node, int new_data){
	// 1. Cek apakah prev_node adalah NULL
	if(prev_node == NULL){
		printf("the given previous node cannot be NULL");
		return;
	}
	// 2. alokasikan new_node
	struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	// 3. Masukkan data
	new_node->data = new_data;
	// 4. Ubah next dari new_node sebagai next dari prev_node
	new_node->next = prev_node->next;
	// 5. Ubah next dari prev_node sebagai new_node
	prev_node->next = new_node;
	// 6. Ubah prev dari new_node sebagai prev_node
	new_node->prev = prev_node;
	// 7. Ubah prev dari node next dari new_node
	if(new_node->next != NULL){
		new_node->next->prev = new_node;
	}
}

void printList(struct Node *node){
	struct Node *last;
	printf("\nTraversal in forward direction\n");
	while(node != NULL){
		printf("%d ", node->data);
		last = node;
		node = node->next;
	}
	printf("\nTraversal in reverse direction\n");
	while(last != NULL){
		printf("%d ", last->data);
		last = last->prev;
	}
}

int main(){
	// mulai dengan list kosong
	struct Node *head = NULL;
	push(&head, 6);
	push(&head, 5);
	push(&head, 2);
	insertAfter(head->next, 5);
	printf("Created DLL is : ");
	printList(head);
	getchar();
	return 0;
}
