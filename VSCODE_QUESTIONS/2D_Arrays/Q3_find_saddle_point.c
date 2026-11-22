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

    int found = 0;
    for (int i = 0; i < r && !found; i++) {
        for (int j = 0; j < c; j++) {
            long long cand = mat[i][j];
            int isRowMin = 1;
            for (int col = 0; col < c; col++) {
                if (mat[i][col] < cand) {
                    isRowMin = 0;
                    break;
                }
            }
            if (!isRowMin) continue;

            int isColMax = 1;
            for (int row = 0; row < r; row++) {
                if (mat[row][j] > cand) {
                    isColMax = 0;
                    break;
                }
            }
            if (isColMax) {
                printf("%d %d %lld\n", i, j, cand);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("None\n");
    }
    return 0;
}
