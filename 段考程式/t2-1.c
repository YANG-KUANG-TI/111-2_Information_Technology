#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    char y[7][10] = {"One","Two","Three","Four","Five","Six","Seven"};

    printf("請輸入整數(1~7):");
    scanf("%d", &x);
    printf("%d ==> %s", x, y[x-1]);
}
