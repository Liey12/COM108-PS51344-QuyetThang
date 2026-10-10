#include <stdio.h>
#include <math.h>

// ===== KHAI BAO HAM =====
void tinhTrungBinhSoChan();
void kiemTraSoNguyenTo();
void kiemTraSoChinhPhuong();
void hienThiMenu();

int main() {
    int luaChon;

    do {
        hienThiMenu();

        printf(">> Xin moi chon chuc nang (1-4): ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                tinhTrungBinhSoChan();
                break;

            case 2:
                kiemTraSoNguyenTo();
                break;

            case 3:
                kiemTraSoChinhPhuong();
                break;

            case 4:
                printf("\nCam on ban da su dung chuong trinh!\n");
                printf("Thoat chuong trinh...\n");
                break;

            default:
                printf("\nLua chon khong hop le! Vui long chon tu 1 den 4.\n");
        }

    } while (luaChon != 4);

    return 0;
}

// ===== HIEN THI MENU =====
void hienThiMenu() {
    printf("\n");
    printf("+---------------------------------------------------+\n");
    printf("|              MENU CHUONG TRINH LAB 4              |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
    printf("| 2. Kiem tra So nguyen to                          |\n");
    printf("| 3. Kiem tra So chinh phuong                       |\n");
    printf("| 4. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}

// ===== BAI 2: TINH TRUNG BINH CAC SO CHIA HET CHO 2 =====
void tinhTrungBinhSoChan() {
    int min, max;
    int i;
    int tong = 0;
    int bienDem = 0;
    float trungBinh;

    printf("\n===== TINH TRUNG BINH CAC SO CHIA HET CHO 2 =====\n");

    printf("Nhap min: ");
    scanf("%d", &min);

    printf("Nhap max: ");
    scanf("%d", &max);

    // Kiem tra min > max
    if (min > max) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        return;
    }

    // Duyet cac so tu min den max
    for (i = min; i <= max; i++) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
    }

    // Kiem tra co tim thay so chan hay khong
    if (bienDem == 0) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    } else {
        trungBinh = (float)tong / bienDem;

        printf("Tong cac so chia het cho 2: %d\n", tong);
        printf("So luong cac so chia het cho 2: %d\n", bienDem);
        printf("Trung binh cong: %.2f\n", trungBinh);
    }
}

// ===== BAI 3: KIEM TRA SO NGUYEN TO =====
void kiemTraSoNguyenTo() {
    int x;
    int i;
    int laSoNguyenTo = 1;

    printf("\n===== KIEM TRA SO NGUYEN TO =====\n");

    printf("Nhap x: ");
    scanf("%d", &x);

    // So nho hon 2 khong phai so nguyen to
    if (x < 2) {
        laSoNguyenTo = 0;
    } else {
        // Kiem tra tu 2 den x - 1
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                laSoNguyenTo = 0;
                break;
            }
        }
    }

    if (laSoNguyenTo == 1) {
        printf("%d la so nguyen to.\n", x);
    } else {
        printf("%d khong phai la so nguyen to.\n", x);
    }
}

// ===== BAI 4: KIEM TRA SO CHINH PHUONG =====
void kiemTraSoChinhPhuong() {
    int x;
    int i;
    int laSoChinhPhuong = 0;

    printf("\n===== KIEM TRA SO CHINH PHUONG =====\n");

    printf("Nhap x: ");
    scanf("%d", &x);

    // Truong hop x = 0
    if (x == 0) {
        laSoChinhPhuong = 1;
    }
    // So am khong phai so chinh phuong
    else if (x < 0) {
        laSoChinhPhuong = 0;
    }
    // Kiem tra cac so tu 1 den x
    else {
        for (i = 1; i <= x; i++) {
            if (i * i == x) {
                laSoChinhPhuong = 1;
                break;
            }
        }
    }

    if (laSoChinhPhuong == 1) {
        printf("%d la so chinh phuong.\n", x);
    } else {
        printf("%d khong phai la so chinh phuong.\n", x);
    }
}