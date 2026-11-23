#include <stdio.h>

int main(void) {
    int d, m, y;
    if (scanf("%d %d %d", &d, &m, &y) != 3) {
        printf("INVALID");
        return 0;
    }

    int isLeap = 0;
    if (y % 400 == 0) {
        isLeap = 1;
    } else if (y % 100 == 0) {
        isLeap = 0;
    } else if (y % 4 == 0) {
        isLeap = 1;
    } else {
        isLeap = 0;
    }

    int maxDays = 0;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        maxDays = 31;
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        maxDays = 30;
    } else if (m == 2) {
        if (isLeap == 1) {
            maxDays = 29;
        } else {
            maxDays = 28;
        }
    } else {
        maxDays = 0;
    }

    if (y > 0 && maxDays > 0 && d >= 1 && d <= maxDays) {
        printf("VALID");
    } else {
        printf("INVALID");
    }

    return 0;
}
