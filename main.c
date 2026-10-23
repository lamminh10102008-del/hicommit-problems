#include <stdio.h>

int main() {
    double w, h;
    
    // Nhập w (cân nặng - kg) và h (chiều cao - cm)
    if (scanf("%lf %lf", &w, &h) != 2) {
        return 0;
    }

    // Đổi h từ cm sang m và tính BMI
    double h_m = h / 100.0;
    double bmi = w / (h_m * h_m);

    // Phân loại BMI theo điều kiện
    if (bmi < 18.5) {
        printf("UNDERWEIGHT\n");
    } else if (bmi < 25.0) {
        printf("NORMAL\n");
    } else if (bmi < 30.0) {
        printf("OVERWEIGHT\n");
    } else {

    }

    return 0;
}