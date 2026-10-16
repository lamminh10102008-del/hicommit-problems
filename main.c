#include <stdio.h>

int main() {
    int distance;
    long long order_value;

    // Đọc hai giá trị từ bàn phím
    if (scanf("%d %lld", &distance, &order_value) != 2) {
        printf("INVALID\n");
        return 0;
    }

    // 1. Kiểm tra dữ liệu không hợp lệ
    if (distance <= 0 || order_value < 0) {
        printf("INVALID\n");
    }
    // 2. Miễn phí giao hàng (đơn hàng >= 500.000đ và khoảng cách <= 15km)
    else if (order_value >= 500000 && distance <= 15) {
        printf("0\n");
    }
    // 3. Tính phí theo khoảng cách
    else if (distance <= 5) {
        printf("15000\n");
    }
    else if (distance <= 15) {
        printf("25000\n");
    }
    else {
        printf("40000\n");
    }

    return 0;
}