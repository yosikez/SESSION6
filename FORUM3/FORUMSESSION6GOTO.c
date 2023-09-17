#include <stdio.h>

int main() {
    int number, sum = 0;

	input_number:
	    printf("Masukkan sebuah bilangan bulat (0 untuk keluar): ");
	    scanf("%d", &number);
	
	    
    if (number != 0) {
        sum += number;
        goto input_number;
    }

    printf("Total dari bilangan-bilangan yang dimasukkan adalah: %d\n", sum);

    return 0;
}

