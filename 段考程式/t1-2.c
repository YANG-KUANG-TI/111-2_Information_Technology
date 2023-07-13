#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r=0;
    printf("請輸入西元年份:");
    scanf("%d",&r);
    
    printf("民國%d年\n", r-1911 );
    printf("---------------------------\n" );

    system("pause");
    return 0;
}
