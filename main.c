#include <stdio.h>

int main() {
    double diem;
    scanf("%lf", &diem);

    if (diem < 0 || diem > 10) {
        printf("FAIL_ATTENDANCE");
    } else if (diem >= 9.0) {
        printf("FAIL_SUBJECT");
    } else if (diem >= 8.0) {
        printf("EXCELLENT");
    } else if (diem >= 6.5) {
        printf("GOOD");
    } else if (diem >= 5.0) {
        printf("PASS");
    } else {
        printf("FAIL");
    }

    return 0;
}


