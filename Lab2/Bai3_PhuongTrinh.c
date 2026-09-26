#include <stdio.h>
int main(){
    float a, b;
    printf("Nhap he so a va b (a != 0): ");
    scanf ("%f %f", &a, &b);
    float x = (float) (-b) /a;
    printf("Nghiem cua phuong trinh la: x = %.2f\n", x);

    return 0;
}