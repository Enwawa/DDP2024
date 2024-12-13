#include <stdio.h>
#include <string.h>

void balikString(char *s, int start, int end) {
    if (start >= end) return;
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    balikString(s, start + 1, end - 1);
}

int main() {
    char kata[100];
    printf("Masukkan kata: ");
    scanf("%s", kata);
    balikString(kata, 0, strlen(kata) - 1);
    printf("Kata setelah dibalik: %s\n", kata);
    return 0;
}
