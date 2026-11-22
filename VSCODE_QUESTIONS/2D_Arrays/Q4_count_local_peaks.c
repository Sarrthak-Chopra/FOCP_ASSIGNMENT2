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

    int peaks = 0;
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int isPeak = 1;
            for (int d = 0; d < 4; d++) {
                int ni = i + dr[d];
                int nj = j + dc[d];
                if (ni >= 0 && ni < r && nj >= 0 && nj < c) {
                    if (mat[i][j] <= mat[ni][nj]) {
                        isPeak = 0;
                        break;
                    }
                }
            }
            if (isPeak) {
                peaks++;
            }
        }
    }

    printf("%d\n", peaks);
    return 0;
}
