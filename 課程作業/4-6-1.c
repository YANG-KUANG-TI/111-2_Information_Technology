#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ix, iy;
	char cx;
	
	printf("�п�J+-*/�B�⦡:");
	
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
			printf("�A�b�F���A�������J���~?");
			break;
	}

	system("pause");
	return 0;
}

