#include <stdio.h>

int main(void) {
    long long totalSeconds;
    if (scanf("%lld", &totalSeconds) == 1) {
        long long hours = totalSeconds / 3600;
        long long rem = totalSeconds % 3600;
        long long minutes = rem / 60;
        long long seconds = rem % 60;
        printf("%lld %lld %lld\n", hours, minutes, seconds);
    }
    return 0;
}
