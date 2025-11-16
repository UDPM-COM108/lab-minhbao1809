#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int luachon;
  do{
    printf("1.Tinh hoc luc\n");
    printf("2.Giai phuong trinh bac 1\n");
    printf("3.Giai phuong trinh bac 2\n");
    printf("4.Tinh tien dien\n");
    printf("0.Thoat chuong trinh\n");
    printf("Nhap lua chon: ");
        if (scanf("%d", &luachon) != 1) {
            printf("Nhap lai\n");
            while (getchar() != '\n');
            luachon = -1; 
        }
    switch(luachon) {
  case 1:
    double diem;
        printf("Nhap diem");
        scanf("%lf",&diem);
    if(diem >=9)
    {
        printf("Xuat xac");
    }
    else if (9>diem && diem>=8)
    {
        printf("Gioi");
    }
    else if (8>diem && diem>=7)
    {
        printf("Kha");
    }
    else if (7>diem && diem>=5)
    {
        printf("Trung binh");
    }
    else if (5>diem && diem>=3)
    {
        printf("Yeu");
    }
    else
    {
        printf("Kem");
    }
  break;
  
  case 2: 
    double a,b,x; 
        printf("Nhap a:/n");
        scanf("%lf",&a);
        printf("Nhap b:/n");
        scanf("%lf",&b);
        x=-b/a;
   if(a==0 || b==0)
   {
    printf("PTVSN");
   }
   else if(b!=0)
   {
   printf("Phuong trinh khong co nghiem");
   }
   else 
   {
   printf("Phuong trinh co 1 nghiem x = -b/a : %lf",x);
   }
  break;

  case 3: 
    double no1,no2,no3,delta,x1,x2;
         printf("GIAI PHUONG TRINH BAC HAI ax^2 + bx + c = 0\n");
         printf("Nhap a: ");
         scanf("%lf", &no1);
         printf("Nhap b: ");
         scanf("%lf", &no2);
         printf("Nhap c: ");
         scanf("%lf", &no3);
    if ( no1 == 0)
    {
           printf("Vi a = 0 nen phuong trinh tro thanh dang bx + c = 0\n");
        if (no2 == 0) {
            if (no3 == 0) {
                printf("Phuong trinh co vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem \n");
            }
        } else {
            x1 = -no3 / no2;
            printf("Phuong trinh co 1 nghiem duy nhat: x = %.4lf\n", x1);
        }

    }
    else {
        delta = no2 * no2 - 4 * no1 * no3;
        printf("a = %.4lf. Phuong trinh bac hai.\n", no1);
        printf("Delta = %.4lf\n", delta);
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } 
        else if (delta == 0) {
            x1 = -no2 / (2 * no1);
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.4lf\n", x1);
        } 
        else {
            x1 = (-no2 + sqrt(delta)) / (2 *no1);
            x2 = (-no2 - sqrt(delta)) / (2 * no1);

            printf("Phuong trinh co 2 nghiem rieng biet:\n");
            printf("x1 = %.4lf\n", x1);
            printf("x2 = %.4lf\n", x2);
        }
    
    }
  break;
  case 4: 
  {
  double dien,bac1,bac2,bac3,bac4,bac5,bac6;
    bac1 = dien * 1.678;
    bac2 = dien * 1.734;
    bac3 = dien * 2.014;
    bac4 = dien * 2.536;
    bac5 = dien * 2.834;
    bac6 = dien * 2.927;
    printf("Nhap muc dien tieu thu");
    scanf("%lf",&dien);
    if(dien >= 0 && dien <= 50)
    {
        printf("So tien can phai dong la %lf",bac1);
    }
      else if (dien >= 51 && dien <= 100)
    {
        printf("So tien can phai dong la %lf",bac2);
    }
    else if (dien >= 101 && dien <= 200)
    {
        printf("So tien can phai dong la %lf",bac3);
    }
    else if (dien >= 201 && dien <= 300)
    {
        printf("So tien can phai dong la %lf",bac4);
    }
    else if (dien >= 301 && dien <= 400)
    {
        printf("So tien can phai dong la %lf",bac5);
    }
    else 
    {
        printf("So tien can phai dong la %lf",bac6);
    }
  break;
}
    case 0: 
    break;
    
  default:
  printf("Chon lai (0-4)");
  break;
    }
} while (luachon != 0); 
    return 0;  
}