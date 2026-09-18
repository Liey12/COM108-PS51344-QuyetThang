#include <stdio.h>

int main() {
    // khai báo và gắn giá trị các biến
    char MSSV[] = "PS51344"; 
    char hoTen[] = "Quyet Thang";
    int namSinh = 2008;
    float diemTB = 8.5f;

    // Tính tuổi
    int tuoi = 2026 - namSinh;

    // Xuất thông tin sinh viên
    printf("Ma so sinh vien: %s\n", MSSV);
    printf("Ho va ten: %s\n", hoTen);
    printf("Nam Sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.2f\n", diemTB);
    
    return 0;
    }