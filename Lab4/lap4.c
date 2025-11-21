#include <stdio.h>

int main() 
{
    int luaChon;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Xac dinh so nguyen to\n");
        printf("2. Tinh trung binh cac so tu nhien chia het cho 2\n");
        printf("3. Kiem tra so chinh phuong\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);

        switch (luaChon)
        {
            case 1:
            {
                int x, count = 0;
                printf("Nhap so x: ");
                scanf("%d", &x);
                if (x <= 1) {
                    printf("%d khong phai so nguyen to\n", x);
                    break;
                }
                for (int i = 2; i < x; i++) {
                    if (x % i == 0) count++;
                }
                if (count == 0)
                    printf("%d la so nguyen to\n", x);
                else
                    printf("%d khong phai so nguyen to\n", x);
                break;
            }
            case 2:
            {
                int min, max, i;
                float tong = 0, dem = 0;

                printf("Nhap min: ");
                scanf("%d", &min);
                printf("Nhap max: ");
                scanf("%d", &max);

                for (i = min; i <= max; i++) {
                    if (i % 2 == 0) {
                        tong += i;
                        dem++;
                    }
                }
                if (dem > 0)
                    printf("Trung binh cac so chia het cho 2 la: %.2f\n", tong / dem);
                else
                    printf("Khong co so chia het cho 2!\n");

                break;
            }
            case 3:
            {
                int x, i;
                int phai = 0;

                printf("Nhap so chinh phuong: ");
                scanf("%d", &x);

                if (x < 0) {
                    printf("%d khong phai la so chinh phuong\n", x);
                    break;
                }

                if (x == 0 || x == 1) {
                    printf("%d la so chinh phuong.\n", x);
                    break;
                }

                for (i = 1; i * i <= x; i++) {
                    if (i * i == x) {
                        phai = 1;
                        break;
                    }
                }

                if (phai)
                    printf("%d la so chinh phuong.\n", x);
                else
                    printf("%d khong phai la so chinh phuong.\n", x);

                printf("Nhan Enter de thoat...");
            }
            case 0:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (luaChon != 0);

    return 0;
}