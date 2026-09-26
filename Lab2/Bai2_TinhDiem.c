#include <stdio.h>
int main(){
    float toan,ly,hoa;
    float diemtrungbinh;
    printf("Nhap diem mon Toan,Ly,Hoa; ");
    scanf("%f%f%f", &toan, &ly, &hoa);
    //Tinh diem trung binh voi he so: Toan3,Ly2,Hoa*1
    diemtrungbinh =(toan*3+ly*2+hoa*1)/6.0f;

    printf("Diem trung binh: %.2f\n",diemtrungbinh);
    return 0;
}