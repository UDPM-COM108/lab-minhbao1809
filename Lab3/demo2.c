#include <stdio.h>

int main(){
    printf("Viet Nam co baon nhieu dan toc anh em");
    printf("a.  52\nb.  53/nc,  54/nd.   55\n");
    printf("Xin moi cac ban chon dap an (a,b,c,d): ");
    char dapAn;
    scanf("%s",&dapAn);
    switch(dapAn){
        case 'a': printf("ban da chon sai\n");
        break;
        case 'b': printf("ban da chon sai\n");
        break;
        case 'c': printf("ban da chon dungc\n");
        break;
        case 'd': printf("ban da chon sai\n");
        break;
        default:
            printf("ban da khong chon dung bo dap an (a,b,c,d)");
    }
    return 0;
}