#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y=0;

    printf("請輸入工讀生本月工作時數:");
    scanf("%d", &x);

    if(x<=100) y = (int)((x)*95*1);
    else if(x<=200) y = (int)((x-100)*95*1.2) + (int)((100)*95*1);
    else y = (int)((x-200)*95*1.5) + (int)((100)*95*1.2) + (int)((100)*95*1);

    printf("工作時數 %d 小時 需付月薪 %d 元", x, y);
}
