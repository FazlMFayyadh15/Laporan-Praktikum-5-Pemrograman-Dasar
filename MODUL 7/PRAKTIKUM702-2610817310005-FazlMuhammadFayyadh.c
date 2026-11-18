#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char kata[200], kecil[200];

    fgets(kata, sizeof(kata), stdin);
    kata[strcspn(kata, "\r\n")] = '\0';

    int n = strlen(kata);
    for (int i = 0; i < n; i++)
        kecil[i] = tolower((unsigned char)kata[i]);
    kecil[n] = '\0';

    int palindrom = 1;
    for (int i = 0; i < n / 2; i++) {
        if (kecil[i] != kecil[n - 1 - i]) {
            palindrom = 0;
            break;
        }
    }

    if (palindrom)
        printf("Kata '%s' adalah palindrom\n", kata);
    else
        printf("Kata '%s' bukan palindrom\n", kata);
    return 0;
}