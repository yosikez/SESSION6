#include <stdio.h>

int main() {
    int choice;

    printf("Pilih yang ingin dijalankan:\n");
    printf("1. Cetak 'Halo, dunia!'\n");
    printf("2. Cetak 'Selamat tinggal, dunia!'\n");
    printf("3. Cetak 'Ini adalah pilihan ketiga.'\n");
    printf("Masukkan pilihan anda (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Halo, dunia!\n");
            break;
        case 2:
            printf("Selamat tinggal, dunia!\n");
            break;
        case 3:
            printf("Ini adalah pilihan ketiga.\n");
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}

