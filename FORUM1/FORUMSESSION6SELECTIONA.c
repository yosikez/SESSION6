#include <stdio.h>

int main() {
	int n;
	printf("============================================\n\n");
	printf("Masukan nilai \t: ");
	scanf("%d", &n);
	
	if(n < 0) {
		printf("bilangan %d adalah bilangan negatif\n", n);
	}
	
	if(n > 0) {
		printf("bilangan %d adalah bilangan positif\n", n);
	}
	
	if(n == 0) {
		printf("bilangan %d bukan positif ataupun negatif\n", n);
	}
	printf("\n============================================");
	return 0;		
}
