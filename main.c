#include <stdio.h>

int main() {
    double w, h;
    
    while (scanf("%lf %lf", &w, &h) == 2) {
        // Biến đổi so sánh nhân chéo để tránh sai số số thực:
        // BMI = w * 10000 / (h * h)
        
        if (w * 10000.0 < 18.5 * h * h) {
            printf("UNDERWEIGHT\n");
        } else if (w * 10000.0 < 25.0 * h * h) {
            printf("NORMAL\n");
        } else if (w * 10000.0 < 30.0 * h * h) {
            printf("OVERWEIGHT\n");
        } else {
            printf("OBESE\n");
        }
    }
    
    return 0;
}
