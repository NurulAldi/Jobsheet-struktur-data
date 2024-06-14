#include<stdio.h>
#include<stdlib.h>

typedef struct karyawan{
	char nama[40];
	int id;
};

main(){
	int myInt;
	karyawan john;
	printf("Ukuran dari int adalah %d\n", sizeof(myInt));
	printf("Ukuran dari int adalah %d\n", sizeof(int));
	printf("Ukuran dari struct karyawan adalah %d\n", sizeof(karyawan));
	printf("Ukuran dari variabel john adalah %d\n", sizeof(john));
	printf("Ukuran dari char adalah %d\n", sizeof(char));
	printf("Ukuran dari short adalah %d\n", sizeof(short));
	printf("Ukuran dari long adalah %d\n", sizeof(long));
	printf("Ukuran dari float adalah %d\n", sizeof(float));
	printf("Ukuran dari double adalah %d\n", sizeof(double));
	return 0;
}
