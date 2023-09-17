#include <stdio.h>

int main() {
	int n;
	printf("============================================\n");
	printf("Masukan nilai \t: ");
	scanf("%d", &n);
	
	if(n < 0) {
		printf("bilangan %d merupakan bilangan negatif\n", n);
		if(n % 2 == 0) {
			printf("bilangan %d merupakan bilangan genap\n", n);
		} else {
			printf("bilangan %d merupakan bilangan ganjil\n", n);
		}
	} else if(n > 0) {
		printf("bilangan %d merupakan bilangan positif\n", n);
		if(n % 2 == 0) {
			printf("bilangan %d merupakan bilangan genap\n", n);
		} else {
			printf("bilangan %d merupakan bilangan ganjil\n", n);
		}
	} else {
		printf("bilangan %d merupakan bilangan nol\n", n);
		printf("bilangan %d merupakan bilangan genap\n", n);
	}
	printf("============================================");
	return 0;		
}
