#include <stdio.h>
#include <string.h>
#include <locale.h>

#define CHAR_BITS 8

void shift_or(char* pattern, char* text) {
	setlocale(LC_ALL, "Turkish");
   	printf ("Shift Or Algoritmasý:\nBir veri öðesinin bitlerini belirli bir sayýda saða ve sola kaydýrmak anlamýna gelir.\n");
	printf ("Örneðin,\n4 bitlik bir sayý olan 1010 (ondalýkta 10), sol iki yer kaydýrýldýðýnda 1000 (ondalýkta 8) olur.\n");
    int m = strlen(pattern);
    int n = strlen(text);
    int mask[CHAR_BITS];
    int i, j;

    // Maske dizisi baþlangýçta tüm bitleri sýfýrlar
    for (i = 0; i < CHAR_BITS; i++) {
        mask[i] = 0;
    }

    // Örüntüdeki her karakterin ilgili biti ayarlanýr
    for (i = 0; i < m; i++) {
        mask[pattern[i] % CHAR_BITS] |= (1 << (i % CHAR_BITS));
    }

    // Shift Or algoritmasý kullanýlarak örüntü metinde aranýr
    int state = 0;
    for (i = 0; i < n; i++) {
        state = ((state << 1) & (1 << m)) | mask[text[i] % CHAR_BITS];
        if (!(state & (1 << (m - 1)))) {
            printf("Örüntü %d. indiste bulundu\n", i - m + 1);
        }
    }
}

int main() {
    char text[] = "abacadabrabracabracadabrabrabracad";
    char pattern[] = "abracadabra";
    shift_or(pattern, text);
    return 0;
}


