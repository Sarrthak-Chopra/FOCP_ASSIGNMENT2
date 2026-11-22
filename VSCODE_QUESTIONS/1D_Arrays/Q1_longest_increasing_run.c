#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long arr[100005];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int curRun = 1;
    int bestRun = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            curRun++;
            if (curRun > bestRun) {
                bestRun = curRun;
            }
        } else {
            curRun = 1;
        }
    }

    printf("%d\n", bestRun);
    return 0;
}
