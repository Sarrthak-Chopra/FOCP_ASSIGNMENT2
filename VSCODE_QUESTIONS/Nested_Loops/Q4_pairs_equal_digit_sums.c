#include <stdio.h>

int digitSum(long long x) {
    if (x < 0) x = -x;
    int sum = 0;
    while (x > 0) {
        sum += (int)(x % 10);
        x /= 10;
    }
    return sum;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long arr[1005];
    int sums[1005];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        sums[i] = digitSum(arr[i]);
    }

    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sums[i] == sums[j]) {
                count++;
            }
        }
    }

    printf("%lld\n", count);
    return 0;
}
