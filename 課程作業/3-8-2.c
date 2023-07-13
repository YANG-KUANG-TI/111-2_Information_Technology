#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=0;
	printf("輸入一個數字:");
	scanf("%d", &x);
	
	x<0 ? printf("負數\n") : printf("正數\n");
	
	system("pause");
	return 0;
}

