#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ix, iy;
	char cx;
	
	printf("請輸入+-*/運算式:");
	
	scanf("%d%c%d", &ix, &cx, &iy);
	
	switch(cx){
		case '+':
			printf("%d%c%d=%d\n", ix, cx, iy, ix+iy);
			break;
		case '-':
			printf("%d%c%d=%d\n", ix, cx, iy, ix-iy);
			break;
		case '*':
			printf("%d%c%d=%d\n", ix, cx, iy, ix*iy);
			break;
		case '/':
			printf("%d%c%d=%f\n", ix, cx, iy, (float)ix/iy);
			break;
		case '%':
			printf("%d%c%d=%d\n", ix, cx, iy, ix%iy);
			break;
		default:
			printf("你在幹嘛，為什麼輸入錯誤?");
			break;
	}

	system("pause");
	return 0;
}

