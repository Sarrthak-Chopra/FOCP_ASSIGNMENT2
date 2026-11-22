#include <stdio.h>

int main(void) {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    long long mat[205][205];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lld", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        long long rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += mat[i][j];
        }
        printf("%lld%c", rowSum, i + 1 == r ? '\n' : ' ');
    }

    for (int j = 0; j < c; j++) {
        long long colSum = 0;
        for (int i = 0; i < r; i++) {
            colSum += mat[i][j];
        }
        printf("%lld%c", colSum, j + 1 == c ? '\n' : ' ');
    }

    return 0;
}
