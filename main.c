#include <stdio.h>
#include <string.h>
#include <locale.h>

#define CHAR_BITS 8

void shift_or(char* pattern, char* text) {
	setlocale(LC_ALL, "Turkish");
   	printf ("Shift Or Algoritmas�:\nBir veri ��esinin bitlerini belirli bir say�da sa�a ve sola kayd�rmak anlam�na gelir.\n");
	printf ("�rne�in,\n4 bitlik bir say� olan 1010 (ondal�kta 10), sol iki yer kayd�r�ld���nda 1000 (ondal�kta 8) olur.\n");
    int m = strlen(pattern);
    int n = strlen(text);
    int mask[CHAR_BITS];
    int i, j;

    // Maske dizisi ba�lang��ta t�m bitleri s�f�rlar
    for (i = 0; i < CHAR_BITS; i++) {
        mask[i] = 0;
    }

    // �r�nt�deki her karakterin ilgili biti ayarlan�r
    for (i = 0; i < m; i++) {
        mask[pattern[i] % CHAR_BITS] |= (1 << (i % CHAR_BITS));
    }

    // Shift Or algoritmas� kullan�larak �r�nt� metinde aran�r
    int state = 0;
    for (i = 0; i < n; i++) {
        state = ((state << 1) & (1 << m)) | mask[text[i] % CHAR_BITS];
        if (!(state & (1 << (m - 1)))) {
            printf("�r�nt� %d. indiste bulundu\n", i - m + 1);
        }
    }
}

int main() {
    char text[] = "abacadabrabracabracadabrabrabracad";
    char pattern[] = "abracadabra";
    shift_or(pattern, text);
    return 0;
}


