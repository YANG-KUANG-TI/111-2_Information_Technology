#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 0;
	int out = 0;
	
	printf("�i��20���B�~��70���B����30��\n");
	printf("============================\n");

	printf("�п�J�i�ּƶq:");
	scanf("%d", &x);
	out = out + x*20;
	printf("�п�J�~���ƶq:");
	scanf("%d", &x);
	out = out + x*70;
	printf("�п�J�����ƶq:");
	scanf("%d", &x);
	out = out + x*30;

	printf("============================\n");
	printf("               �`���B:%d��\n", out);
	
	system("pause");
	return 0;
}

