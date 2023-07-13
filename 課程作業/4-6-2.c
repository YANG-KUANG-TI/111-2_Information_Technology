#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ix, iy;
	int cx;
	
	printf("請輸入按鈕號:");
	
	scanf("%d", &cx);
	
	switch(cx){
		case 0:
			printf("自動關燈\n");
			break;
		case 1:
			printf("亮一盞燈\n");
			break;
		case 2:
			printf("亮兩盞燈\n");
			break;
		case 3:
			printf("亮三盞燈\n");
			break;
		default:
			printf("輸入錯誤\n");
			break;
	}

	system("pause");
	return 0;
}

