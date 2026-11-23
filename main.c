#include <stdio.h>

int main() {
    double diem;
    scanf("%lf", &diem)

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le")
    } else if (diem >= 9.0) {
        printf("Xuat sac")
    } else if (diem >= 8.0) {
        printf("Gioi")
    } else if (diem >= 6.5) {
        printf("Kha")
    } else if (diem >= 5.0) {
        printf("Trung binh")
    } else 
        printf("Yeu")
    }

    return 0;
}
