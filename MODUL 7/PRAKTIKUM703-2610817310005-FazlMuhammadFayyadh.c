#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kalimat[500];
    int vokal = 0, konsonan = 0;

    printf("Kalimat : ");
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\r\n")] = '\0';

    for (int i = 0; kalimat[i] != '\0'; i++) {
        char c = tolower((unsigned char)kalimat[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
            vokal++;
        else if (isalpha((unsigned char)c))
            konsonan++;
    }

    printf("Jumlah Vokal : %d\n", vokal);
    printf("Jumlah Konsonan : %d\n", konsonan);
    return 0;
}