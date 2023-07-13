#include <stdio.h>
#include <stdlib.h>

int main()
{
	int money;
	
	printf("請輸入金額:");
	scanf("%d", &money);
	
	if (money>20000) printf("實需付: %d 元 \n", (money*8/10));
	else if (money>10000) printf("實需付: %d 元 \n", money*85/100);
	else if (money>5000) printf("實需付: %d 元 \n", money*9/10);
	else printf("實需付: %d 元 \n", money*96/100);
	
	system("pause");
	return 0;
}

