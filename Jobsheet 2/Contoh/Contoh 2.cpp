#include<stdio.h>

struct Person{
	char nama[50];
	int citNo;
	float gaji;
};

int main(){
	struct Person person1, person2, p[20];
	printf("%f", person1.gaji); // mengakses data dari anggota struct "gaji" pada variabel "person1"
	return 0;
}
