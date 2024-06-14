#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head;
void tambahAwal();
void tambahAkhir();
void hapusAwal();
void hapusAkhir();
void tampilkan();
void cari();

int main(){
	int choice = 0;
	while(choice != 0){
		printf("\n*****************Main Menu********************\n");
		printf("\nSilahkan pilih salah satu dari menu berikut...\n");
		printf("\n==============================================\n");
		printf("\n1.Masukan data di awal\n2.Masukan data di akhir\n\
		3.Hapus dari awal\n4.Hapus dari akhir\n5.Cari sebuah elemen\n6.Tampilkan\n7.Exit\n");
		printf("\nMasukan pilihanmu? ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				tambahAwal();
				break;
			case 2:
				tambahAkhir();
				break;
			case 3:
				hapusAwal();
				break;
			case 4:
				hapusAkhir();
				break;
			case 5:
				cari();
				break;
			case 6:
				tampilkan();
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("Mohon masukan pilihan sesuai menu..");
		}
	}
	
}

void tambahAwal(){
	struct node *ptr, *temp;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node));
	if(ptr == NULL){
		printf("\nOVERFLOW");
	}
	else{
		printf("\nMasukan nilai item? ");
		scanf("%d", &item);
		ptr->data = item;
		if(head == NULL){
			head = ptr;
			ptr->next = head;
			ptr->prev = head;
		}
		else{
			temp = head;
			while(temp->next != head){
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->prev = temp;
			ptr->next = head;
			head->prev = ptr;
			head = ptr;
		}
		printf("\nNode inserted\n");
	}
}

void tambahAkhir(){
	struct node *ptr, *temp;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node));
	if(ptr == NULL){
		printf("\nOVERFLOW");
	}
	else{
		printf("\nMasukan nilai? ");
		scanf("%d", &item);
		ptr->data = item;
		if(head == NULL){
			head = ptr;
			ptr->next = head;
			ptr->prev = head;
		}else{
			temp = head;
			while(temp->next != head){
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->prev = temp;
			ptr->next = head;
			head->prev = ptr;
		}
		printf("\nnode ditambahkan\n");
	}
}

void hapusAwal(){
	struct node *temp;
	if(head == NULL){
		printf("\nUNDERFLOW");
	}
	else if(head->next == head){
		head = NULL;
		free(head);
		printf("\nnode dihapus\n");
	}
	else{
		temp = head;
		while(temp->next =! head){
			temp = temp->next;
		}
		temp->next = head->next
		head->next->prev = temp;
		free(head);
		head = temp->next;
	}
}

void hapusAkhir(){
	struct node *ptr;
	if(head == NULL){
		printf("\nUNDERFLOW");
	}
	else if(head->next == head){
		head = NULL;
		free(head);
		printf("\nnode dihapus\n");
	}
	else{
		ptr = head;
		while(ptr->next != head){
			ptr = ptr->next
		}
		ptr->prev->next = head;
		head->prev = ptr->prev;
		free(ptr);
		printf("\nnode dihapus\n");
	}
}

void tampilkan(){
	struct node *ptr;
	ptr = head;
	if(head == NULL){
		printf("\nTidak ada item yang bisa ditampilkan");
	}
	else{
		printf("\nMenampilkan nilai ... \n");
		while(ptr->next != head){
			printf("%d ", ptr->data);
			ptr = ptr->next;
		}
		printf("%d ", ptr->data);
	}
}

void cari(){
	struct node *ptr;
	int item, i=0, flag=1;
	ptr = head;
	if(ptr == NULL){
		printf("\nList kosong\n");
	}
	else{
		printf("\nMasukan item yang ingin kamu cari? ");
		scanf("%d", &item);
		if(head->data == item){
			printf("item ditemukan pada lokasi %d", i+1);
			flag = 0;
			break;
		}
		else{
			while(ptr->next != head){
				if(ptr->data == item){
					printf("item ditemukan pada lokasi %d", i+1);
					flag 0;
					break;
				}
				else{
					flag=1;
				}
				i++;
				ptr = ptr->next;
			}
		}
		if(flag != 0){
			printf("Item tidak ditemukan\n");
		}
	}
}
