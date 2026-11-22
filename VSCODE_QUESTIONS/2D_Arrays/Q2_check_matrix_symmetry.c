#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long mat[205][205];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &mat[i][j]);
        }
    }

    int symmetric = 1;
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    printf("%s\n", symmetric ? "YES" : "NO");
    return 0;
}
