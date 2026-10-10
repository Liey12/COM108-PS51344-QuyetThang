#include <stdio.h>
#include <math.h>

void tinhHocLuc(void);
void giaiPTBacHai(void);
void tinhTienDien(void);

int main(void) {
    int luaChon;

    do {
        printf("\n==== MENU CHUONG TRINH LAB 3 ====\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac 2\n");
        printf("3. Tinh tien dien tieu thu\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");

        if (scanf("%d", &luaChon) != 1) {
            printf("Nhap khong hop le!\n");
            while (getchar() != '\n') {
            }
            luaChon = -1;
            continue;
        }

        switch (luaChon) {
            case 1:
                tinhHocLuc();
                break;
            case 2:
                giaiPTBacHai();
                break;
            case 3:
                tinhTienDien();
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    } while (luaChon != 0);

    return 0;
}

void tinhHocLuc(void) {
    float diem;

    printf("Nhap diem sinh vien: ");
    if (scanf("%f", &diem) != 1) {
        printf("Diem so khong hop le!\n");
        while (getchar() != '\n') {
        }
        return;
    }

    if (diem < 0.0f || diem > 10.0f) {
        printf("Diem so nhap khong hop le!\n");
        return;
    }

    if (diem >= 9.0f) {
        printf("Hoc luc: Xuat sac\n");
    } else if (diem >= 8.0f) {
        printf("Hoc luc: Gioi\n");
    } else if (diem >= 6.5f) {
        printf("Hoc luc: Kha\n");
    } else if (diem >= 5.0f) {
        printf("Hoc luc: Trung binh\n");
    } else if (diem >= 3.5f) {
        printf("Hoc luc: Yeu\n");
    } else {
        printf("Hoc luc: Kem\n");
    }
}

void giaiPTBacHai(void) {
    double a, b, c;
    double delta, x1, x2, x;

    printf("\nNhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);

    if (a == 0.0) {
        if (b == 0.0) {
            if (c == 0.0) {
                printf("Phuong trinh vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            x = -c / b;
            printf("Phuong trinh co nghiem duy nhat: x = %.2lf\n", x);
        }
        return;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0.0) {
        printf("Phuong trinh vo nghiem.\n");
    } else if (delta == 0.0) {
        x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x = %.2lf\n", x);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %.2lf\n", x1);
        printf("x2 = %.2lf\n", x2);
    }
}

void tinhTienDien(void) {
    double kwh, tien = 0.0;

    printf("Nhap so kWh tieu thu: ");
    if (scanf("%lf", &kwh) != 1) {
        printf("So kWh khong hop le!\n");
        while (getchar() != '\n') {
        }
        return;
    }

    if (kwh <= 0.0) {
        printf("So kWh nhap vao khong hop le!\n");
        return;
    }

    if (kwh <= 50.0) {
        tien = kwh * 1678;
    } else if (kwh <= 100.0) {
        tien = 50.0 * 1678 + (kwh - 50.0) * 1734;
    } else if (kwh <= 200.0) {
        tien = 50.0 * 1678 + 50.0 * 1734 + (kwh - 100.0) * 2014;
    } else if (kwh <= 300.0) {
        tien = 50.0 * 1678 + 50.0 * 1734 + 100.0 * 2014 + (kwh - 200.0) * 2536;
    } else if (kwh <= 400.0) {
        tien = 50.0 * 1678 + 50.0 * 1734 + 100.0 * 2014 + 100.0 * 2536 + (kwh - 300.0) * 2927;
    } else {
        tien = 50.0 * 1678 + 50.0 * 1734 + 100.0 * 2014 + 100.0 * 2536 + 100.0 * 2927 + (kwh - 400.0) * 2927;
    }

    printf("Tong tien dien phai tra: %.0lf dong\n", tien);
}
