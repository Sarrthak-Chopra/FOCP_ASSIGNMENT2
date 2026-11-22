#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    if (c >= 'A' && c <= 'Z') c = (char)(c - 'A' + 'a');
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main(void) {
    char line[10005];
    if (fgets(line, sizeof(line), stdin) == NULL) return 0;

    size_t len = strlen(line);
    if (len > 0 && line[len - 1] == '\n') {
        line[len - 1] = '\0';
    }

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        char c = line[i];
        if (isLetter(c)) {
            if (isVowel(c)) vowels++;
            else consonants++;
        } else if (c >= '0' && c <= '9') {
            digits++;
        } else if (c == ' ') {
            spaces++;
        }
    }

    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}
