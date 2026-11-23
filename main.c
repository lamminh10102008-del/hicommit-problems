#include <stdio.h>

int laNamNhuan(int y) {
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        return 1;
    }
    return 0;
}

int soNgayTrongThang(int m, int y) {
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return laNamNhuan(y) ? 29 : 28;
        default:
            return 0;
    }
}

int main() {
    int d, m, y;
    scanf("%d %d %d", &d, &m, &y);

    if (y > 0 && m >= 1 && m <= 12) {
        int maxD = soNgayTrongThang(m, y);
        if (d >= 1 && d <= maxD) {
            printf("Hop le");
        } else {
            printf("Khong hop le");
        }
    } else {
        printf("Khong hop le");
    }

    return 0;
}

