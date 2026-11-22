#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int found = 0;
    for (int a = 1; a <= N; a++) {
        for (int b = a + 1; b <= N; b++) {
            for (int c = b + 1; c <= N; c++) {
                long long lhs = 1LL * a * a + 1LL * b * b;
                long long rhs = 1LL * c * c;
                if (lhs == rhs) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("None\n");
    }
    return 0;
}
