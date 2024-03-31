#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk menyimpan informasi buku
typedef struct Node {
    char judul[100];
    char pengarang[100];
    int tahun;
    struct Node* prev;
    struct Node* next;
} Node;

// Fungsi untuk membuat node baru
Node* buatNode(char judul[], char pengarang[], int tahun) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Pembuatan node gagal. Memori tidak cukup.\n");
        exit(EXIT_FAILURE);
    }
    strcpy(newNode->judul, judul);
    strcpy(newNode->pengarang, pengarang);
    newNode->tahun = tahun;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk menambahkan node di awal linked list
void tambahNodeAwal(Node** head, char judul[], char pengarang[], int tahun) {
    Node* newNode = buatNode(judul, pengarang, tahun);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

// Fungsi untuk menambahkan node di akhir linked list
void tambahNodeAkhir(Node** head, char judul[], char pengarang[], int tahun) {
    Node* newNode = buatNode(judul, pengarang, tahun);
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

// Fungsi untuk menghapus node berdasarkan judul buku
void hapusNode(Node** head, char judul[]) {
    if (*head == NULL) {
        printf("Linked list kosong.\n");
        return;
    }
    Node* temp = *head;
    while (temp != NULL) {
        if (strcmp(temp->judul, judul) == 0) {
            if (temp->prev == NULL) { // Jika node yang dihapus adalah head
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
            printf("Node dengan judul '%s' telah dihapus.\n", judul);
            return;
        }
        temp = temp->next;
    }
    printf("Node dengan judul '%s' tidak ditemukan.\n", judul);
}

// Fungsi untuk mencetak seluruh data buku dalam linked list
void cetakList(Node* head) {
    if (head == NULL) {
        printf("Linked list kosong.\n");
        return;
    }
    Node* temp = head;
    printf("Daftar Buku:\n");
    while (temp != NULL) {
        printf("Judul: %s, Pengarang: %s, Tahun: %d \n", temp->judul, temp->pengarang, temp->tahun);
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL; // Inisialisasi linked list kosong
    int pilihan;
    char judul[100], pengarang[100];
    int tahun;

    do {
        printf("\nPilihan Menu:\n");
        printf("1. Tambah Node di Awal\n");
        printf("2. Tambah Node di Akhir\n");
        printf("3. Hapus Node\n");
        printf("4. Cetak List\n");
        printf("0. Keluar\n");
        printf("Masukkan pilihan Anda: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("Masukkan judul buku: ");
                scanf(" %[^\n]s", judul);
                printf("Masukkan nama pengarang: ");
                scanf(" %[^\n]s", pengarang);
                printf("Masukkan tahun terbit: ");
                scanf("%d", &tahun);
                tambahNodeAwal(&head, judul, pengarang, tahun);
                break;
            case 2:
                printf("Masukkan judul buku: ");
                scanf(" %[^\n]s", judul);
                printf("Masukkan nama pengarang: ");
                scanf(" %[^\n]s", pengarang);
                printf("Masukkan tahun terbit: ");
                scanf("%d", &tahun);
                tambahNodeAkhir(&head, judul, pengarang, tahun);
                break;
            case 3:
                printf("Masukkan judul buku yang ingin dihapus: ");
                scanf(" %[^\n]s", judul);
                hapusNode(&head, judul);
                break;
            case 4:
                cetakList(head);
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

