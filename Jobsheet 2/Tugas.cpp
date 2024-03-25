#include<stdio.h>

typedef struct Mahasiswa{
	int nim;
	char nama[50];
	char tanggal_lahir[50];
	int ipk;
}mahasiswa;

void inputdata(mahasiswa *mhs);
void tampildata(mahasiswa mhs);

int main(){
	mahasiswa mhs;
	
	inputdata(&mhs);
	tampildata(mhs);
	
	return 0;
}

void inputdata(mahasiswa *mhs){ /* variabel struct mhs dijadikan pointer agar nilai inputan user tidak hanya tersimpan 
pada scope fungsi inputdata saja sehingga bisa diakses di scope lain atau global*/
	printf("Masukkan data mahasiswa \n");
	printf("Nama : ");
	gets(mhs->nama);
	fflush(stdin);

	printf("Nim : ");
	scanf("%i", &mhs->nim);
	fflush(stdin);

	printf("Tanggal lahir (dd-mm-yyyy) : ");
	gets(mhs->tanggal_lahir);
	fflush(stdin);

	printf("IPK : ");
	scanf("%i", &mhs->ipk);
	fflush(stdin);
	
}

void tampildata(mahasiswa mhs){
	
	printf("\n\nData Mahasiswa\n");
	printf("Nama : %s\n", mhs.nama);
	printf("Nim : %i\n", mhs.nim);
	printf("Tanggal lahir : %s\n", mhs.tanggal_lahir);
	printf("IPK : %i\n", mhs.ipk);
	
}
