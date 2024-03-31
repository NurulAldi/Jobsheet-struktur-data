#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan informasi mobil
typedef struct Node {
    char noPlat[20];
    char merkMobil[50];
    char namaPemilik[50];
    struct Node* prev;
    struct Node* next;
} Node;

// Fungsi untuk membuat node baru
Node* buatNode(char noPlat[], char merkMobil[], char namaPemilik[]) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Pembuatan node gagal. Memori tidak cukup.\n");
        exit(EXIT_FAILURE);
    }
    strcpy(newNode->noPlat, noPlat);
    strcpy(newNode->merkMobil, merkMobil);
    strcpy(newNode->namaPemilik, namaPemilik);
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk menambahkan mobil ke akhir antrian
void masukkanMobil(Node** head, char noPlat[], char merkMobil[], char namaPemilik[]) {
    Node* newNode = buatNode(noPlat, merkMobil, namaPemilik);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Fungsi untuk mengeluarkan mobil dari antrian berdasarkan nomor plat
void keluarkanMobil(Node** head, char noPlat[]) {
    if (*head == NULL) {
        printf("Antrian mobil kosong.\n");
        return;
    }
    Node* temp = *head;
    while (temp != NULL) {
        if (strcmp(temp->noPlat, noPlat) == 0) {
            if (temp->prev == NULL) { // Jika mobil yang dikeluarkan adalah mobil pertama
                *head = temp->next;
                if (*head != NULL) {
                    (*head)->prev = NULL;
                }
            } else {
                temp->prev->next = temp->next;
                if (temp->next != NULL) {
                    temp->next->prev = temp->prev;
                }
            }
            free(temp);
            printf("Mobil dengan nomor plat '%s' telah dikeluarkan dari antrian.\n", noPlat);
            return;
        }
        temp = temp->next;
    }
    printf("Mobil dengan nomor plat '%s' tidak ditemukan dalam antrian.\n", noPlat);
}

// Fungsi untuk mencetak seluruh antrian mobil
void cetakAntrian(Node* head) {
    if (head == NULL) {
        printf("Antrian mobil kosong.\n");
        return;
    }
    Node* temp = head;
    printf("Antrian Mobil:\n");
    while (temp != NULL) {
        printf("Nomor Plat: %s, Merk Mobil: %s, Nama Pemilik: %s\n", temp->noPlat, temp->merkMobil, temp->namaPemilik);
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL; // Inisialisasi antrian kosong
    int pilihan;
    char noPlat[20], merkMobil[50], namaPemilik[50];

    do {
        printf("\nPilihan Menu:\n");
        printf("1. Masukkan Mobil ke Antrian\n");
        printf("2. Keluarkan Mobil dari Antrian\n");
        printf("3. Cetak Antrian Mobil\n");
        printf("0. Keluar\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Masukkan nomor plat mobil: ");
                scanf(" %[^\n]s", noPlat);
                printf("Masukkan merk mobil: ");
                scanf(" %[^\n]s", merkMobil);
                printf("Masukkan nama pemilik mobil: ");
                scanf(" %[^\n]s", namaPemilik);
                masukkanMobil(&head, noPlat, merkMobil, namaPemilik);
                break;
            case 2:
                printf("Masukkan nomor plat mobil yang akan dikeluarkan: ");
                scanf(" %[^\n]s", noPlat);
                keluarkanMobil(&head, noPlat);
                break;
            case 3:
                cetakAntrian(head);
                break;
            case 0:
                printf("Terima kasih.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 0);

    return 0;
}

