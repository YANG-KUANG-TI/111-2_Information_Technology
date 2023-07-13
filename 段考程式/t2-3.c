#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    char l[4][10] = {"排骨","海鮮","雞腿","魚排"};
    short s[4] = {75,85,80,60};

    printf("======================\n");
    printf("  真好吃排骨點餐系統\n");
    printf("======================\n");
    printf("(1) 排骨便當$75\n");
    printf("(2) 海鮮便當$85\n");
    printf("(3) 雞腿便當$80\n");
    printf("(4) 魚排便當$60\n");
    printf("======================\n");

    printf("\n請輸入您要購買的便當代號:");
    scanf("%d", &x);
    printf("\n請輸入您要購買的便當個數:");
    scanf("%d", &y);
    printf("\n請輸入您的費用:");
    scanf("%d", &z);

    if(0<x&&x<5){
        printf("\n================================\n");
        printf("%s便當一份%d元，你總共買%d 個 費用共:%d 元\n", l[x-1], s[x-1], y, s[x-1]*y);
        printf("================================\n\n");
    }
    else{
        printf("\n================================\n");
        printf("沒有這個選項!\n", l[x-1], s[x-1], y, s[x-1]*y);
        printf("================================\n\n");
        printf("找零: %d 元", z);
        return 0;
    }

    if(s[x-1]*y<z) printf("找零: %d 元", z-s[x-1]*y);
    else printf("你的錢不夠!", y-s[x-1]);
}
