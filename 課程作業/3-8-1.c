#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=0;
	printf("輸入一個數字:");
	scanf("%d", &x);
	
	x%2==1 ? printf("奇數\n") : printf("偶數\n");
	
	system("pause");
	return 0;
}

