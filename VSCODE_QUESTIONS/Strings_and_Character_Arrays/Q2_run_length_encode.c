#include <stdio.h>
#include <string.h>

int main(void) {
    char s[10005];
    if (scanf("%10004s", s) != 1) return 0;

    int n = (int)strlen(s);
    if (n == 0) {
        printf("\n");
        return 0;
    }

    int count = 1;
    for (int i = 1; i <= n; i++) {
        if (i < n && s[i] == s[i - 1]) {
            count++;
        } else {
            printf("%c%d", s[i - 1], count);
            count = 1;
        }
    }
    printf("\n");
    return 0;
}
