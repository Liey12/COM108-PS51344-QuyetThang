#include <stdio.h>
int main() {
    float diemTB;
    int hanhKiem;

    printf("Nhap diem trung binh va hanh kiem (1: Tot, 0: khac): ");
    scanf("%f %d", &diemTB, &hanhKiem);

    int dieuKienDiem = (diemTB >= 8.0f);
    int dieuKienHanhKiem = (hanhKiem == 1);

    int ketQua = dieuKienDiem && dieuKienHanhKiem;

    printf("Dieu kien diem trung binh >= 8: %d\n", dieuKienDiem);
    printf("Dieu kien hanh kiem tot: %d\n", dieuKienHanhKiem);
    printf("Ket qua xet hoc bong (1: Dat, 0: Khong dat): %d\n", ketQua);

    return 0;
}