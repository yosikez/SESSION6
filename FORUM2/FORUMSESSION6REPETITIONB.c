#include <stdio.h>

int main() {
	int batas, i;
	
	start :
		printf("===============PROGRAM MENAMPILKAN ANGKA GENAP===============\n");
		printf("Masukan angka awal \t\t\t: ");
		scanf("%d", &i);
		printf("Masukan angka akhir \t\t\t: ");
		scanf("%d", &batas);
	if(i > batas) {
		system("cls");
		printf("=========================WARNING==============================\n");
		printf("\tAngka awal harus lebih kecil dari angka akhir\n");
		printf("\t\tTekan enter untuk melanjutkan");
		while (getchar() != '\n'); 
		getchar(); 
		system("cls");
		goto start;
	}
	
	printf("Angka genap dari %d sampai dengan %d\t:\n", i, batas);
	while(i <= batas) {
		if(i % 2 == 0) {
			printf("\t\t\t%d\n", i);
		}
		i++;
	}
}
