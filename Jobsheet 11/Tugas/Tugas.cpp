#include<stdio.h>
#include<stdlib.h>

typedef struct Mahs{
	int nim;
	char nama[50];
	char ttl[100];
	float ipk;
}mahs;

int linearSearch(mahs mhs[], int search){
	for(int i=0; i < 5; i++){
		if(mhs[i].nim == search){
			return i;
		}
	}
	return -1;
}

int binarySearch(mahs mhs[], int search){
	int first = 0;
	int last = 4;
	int mid = (first+last)/2;
	while(first <= last){
		if(mhs[mid].nim == search){
			return mid;
		}
		else if(mhs[mid].nim < search){
			first = mid + 1;
		}
		else{
			last = mid - 1;
		}
		mid = (first+last)/2;
	}
	return -1;
}


int main(){
	mahs mhs[5];
	int i, search, pilihan, ketemu;
	
	printf("\t\t\t==============================\n");
	printf("\t\t\t||Nama : Nurul Aldi         ||\n");
	printf("\t\t\t||Nim : 23343048            ||\n");
	printf("\t\t\t||Prodi : Teknik Informatika||\n");
	printf("\t\t\t==============================\n");
	
	printf("\n\nMasukkan identias dari 5 mahasiswa\n");
	for(i=0; i<5; i++){
		printf("Data Mahasiswa ke %d\n", i+1);
		printf("Nim : ");
		scanf("%d", &mhs[i].nim);
		fflush(stdin);
		printf("Nama : ");
		gets(mhs[i].nama);
		printf("Tempat Tanggal Lahir : ");
		gets(mhs[i].ttl);
		printf("IPK : ");
		scanf("%f", &mhs[i].ipk);
		fflush(stdin);
	}
	
	do{
		printf("\n\nPilih metode searching yang anda inginkan");
		printf("\n1.Linear Search");
		printf("\n2.Binary Search");
		printf("\n3.Keluar");
		printf("\nPilihan : ");
		scanf("%d", &pilihan);
		fflush(stdin);
		
		
		switch(pilihan){
			case 1:
				printf("\nMasukkan Nim yang anda cari : ");
				scanf("%d", &search);
				fflush(stdin);
				ketemu = linearSearch(mhs, search);
				break;
			case 2:
				printf("\nMasukkan Nim yang anda cari : ");
				scanf("%d", &search);
				fflush(stdin);
				ketemu = binarySearch(mhs, search);
				break;
			case 3:
				exit(0);
			default:
				printf("\nPilihan anda tidak valid");	
			}
		if(ketemu == -1){
			printf("Data mahasiswa dengan NIM %d tidak ditemukan", search);
		}
		else{
			printf("Data mahasiswa dengan NIM %d adalah sebagai berikut\n", search);
			printf("Nama : %s", mhs[ketemu].nama);
			printf("\nNim : %d", mhs[ketemu].nim);
			printf("\nTempat tanggal lahir : %s", mhs[ketemu].ttl);
			printf("\nIPK : %.2f", mhs[ketemu].ipk);
		}
	}while(pilihan != 3);
	
	return 0;

}
