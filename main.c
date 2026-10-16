#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Một số là số chẵn nếu chia cho 2 có dư là 0 (n % 2 == 0)
    if (n % 2 == 0) {
        printf("CHAN\n");
    } else {
        printf("LE\n");
    }

    return 0;
}