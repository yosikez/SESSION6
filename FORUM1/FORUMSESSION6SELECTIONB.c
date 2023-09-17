#include <stdio.h>

int main() {
	int n;
	
	printf("=================================\n\n");
	printf("Masukan angka: ");
	scanf("%d", &n);
	
	if(n % 5 == 0) {
		printf("bilangan %d habis dibagi 5", n);
	} else {
		printf("bilangan %d tidak habis dibagi 5", n);
	}
	
	printf("\n\n=================================\n\n");
	return 0;
}
