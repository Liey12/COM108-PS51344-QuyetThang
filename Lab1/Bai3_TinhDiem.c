#include <stdio.h>

int main() {
    char MSSV[] = "PS51344";
    char hoTen[] = "Nguyen Quyet Thang";
    float DiemToan=7.5f;
    float DiemLy=8.0f;
    float DiemSinh=6.5f;

    float diemTrungBinh = (float)(DiemToan *2 + DiemLy + DiemSinh) / 4;

    printf("Ma so sinh vien: %s\n", MSSV);
    printf("Ho va ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh); 

    return 0;
}