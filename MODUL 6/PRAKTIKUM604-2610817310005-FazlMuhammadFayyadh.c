#include <stdio.h>
#include <string.h>

int main() {
    char kode[1000], pesan[1000], hasil[1000];
    int bintang = 0, pagar = 0;

    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);
    kode[strcspn(kode, "\r\n")] = '\0';
    pesan[strcspn(pesan, "\r\n")] = '\0';

    int len1 = strlen(kode);
    int len2 = strlen(pesan);

    if (len1 != len2) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        if (kode[i] == ' ' && pesan[i] == ' ') {
            hasil[i] = ' ';
        } else if (kode[i] == pesan[i]) {
            hasil[i] = '*';
            bintang++;
        } else {
            hasil[i] = '#';
            pagar++;
        }
    }
    hasil[len1] = '\0';

    printf("%s\n", hasil);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);
    if (bintang >= pagar)
        printf("Pesan Asli\n");
    else
        printf("Pesan Palsu\n");
    return 0;
}