#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool cekPalindrome(const char *s, int start, int end) {
    if (start >= end) return true;
    if (s[start] != s[end]) return false;
    return cekPalindrome(s, start + 1, end - 1);
}

int main() {
    char kata[100];
    printf("Masukkan kata: ");
    scanf("%s", kata);
    if (cekPalindrome(kata, 0, strlen(kata) - 1)) {
        printf("%s adalah palindrome.\n", kata);
    } else {
        printf("%s bukan palindrome.\n", kata);
    }
    return 0;
}
