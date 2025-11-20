#include <stdio.h>

int main() {
    /*int x;
    int count = 0;
    printf("Nhap so x: ");
    scanf("%d", &x);
    if (x <= 1) {
        printf("%d khong phai so nguyen to\n", x);
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;
        }
    }
    if (count == 0) {
        printf("%d la so nguyen to\n", x);
    } else {
        printf("%d khong phai so nguyen to\n", x);
    }*/
   //BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
   /*int min, max;
    int i;
    float tong = 0, bienDem = 0, trungBinh = 0;
    printf("Nhap min: ");
    scanf("%d", &min);
    printf("Nhap max: ");
    scanf("%d", &max);
    i = min;
    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }
    if (bienDem > 0) {
        trungBinh = tong / bienDem;
        printf("Trung binh cac so tu nhien chia het cho 2 la: %.2f", trungBinh);
    } else {
        printf("Khong co so nao chia het cho 2 trong khoang nay!");
    }*/
   //Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
    int x;
    int i;
    int laChinhPhuong = 0; // 0: không, 1: có

    printf("Nhap x: ");
    scanf("%d", &x);

    if(x < 0){
        printf("%d khong phai la so chinh phuong\n", x);
    }

    for(i = 1; i * i <= x; i++){
        if(i * i == x){
            laChinhPhuong = 1;
            break;
        }
    }
    if(laChinhPhuong == 1){
        printf("%d la so chinh phuong\n", x);
    } else {
        printf("%d khong phai la so chinh phuong\n", x);
    }

    return 0;
}