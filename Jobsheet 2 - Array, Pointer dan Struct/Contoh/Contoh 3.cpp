#include<stdio.h>

int main(){
	
	int n[10];
	int i,j;
	
	for(i=0; i<10; i++){ // assign value untuk array n dari indeks 0 hingga 9
		n[i] = i + 100;
	}
	
	for(j=0; j<10; j++){
		printf("Element[%d] = %d\n", j, n[j]); // mengakses value dari array n dimulai dari indeks 0 hingga 9
	}
	
	return 0;
}
