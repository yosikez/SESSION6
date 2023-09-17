#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    do {
        printf("Tebak angka antara 1 dan 100: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < randomNumber) {
            printf("Angka terlalu kecil. Coba lagi.\n\n");
        } else if (guess > randomNumber) {
            printf("Angka terlalu besar. Coba lagi.\n\n");
        } else {
            printf("Selamat! Anda menebak dengan benar dalam %d percobaan.\n", attempts);
        }

    } while (guess != randomNumber);

    return 0;
}

