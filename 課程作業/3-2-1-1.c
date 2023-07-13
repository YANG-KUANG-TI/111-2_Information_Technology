#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 0;
	int out = 0;
	
	printf("可樂20元、漢堡70元、薯條30元\n");
	printf("============================\n");

	printf("請輸入可樂數量:");
	scanf("%d", &x);
	out = out + x*20;
	printf("請輸入漢堡數量:");
	scanf("%d", &x);
	out = out + x*70;
	printf("請輸入薯條數量:");
	scanf("%d", &x);
	out = out + x*30;

	printf("============================\n");
	printf("               總金額:%d元\n", out);
	
	system("pause");
	return 0;
}

