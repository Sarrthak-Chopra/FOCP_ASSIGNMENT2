#include <stdio.h>
#include <limits.h>

long long absDiff(long long a, long long b) {
    long long d = a - b;
    return d < 0 ? -d : d;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long arr[1005];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    if (n < 2) {
        printf("0\n");
        return 0;
    }

    long long minDiff = LLONG_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long diff = absDiff(arr[i], arr[j]);
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    printf("%lld\n", minDiff);
    return 0;
}
