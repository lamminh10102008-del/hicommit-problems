#include <stdio.h>

int main() {
    int k;
    if (scanf("%d", &k) != 1 || k <= 0) return 0;
    int moc[] = {400, 300, 200, 100, 50, 0};
    int gia[] = {2927, 2834, 2536, 2014, 1734, 1678};

    long long tong_tien = 0;

    for (int i = 0; i < 6; i++) {
        if (k > moc[i]) {
            tong_tien += (long long)(k - moc[i]) * gia[i];
            k = moc[i];
    }
    }

    printf("%lld\n", tong_tien);
    return 0;
}