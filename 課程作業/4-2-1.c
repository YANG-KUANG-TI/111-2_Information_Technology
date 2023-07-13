#include <stdio.h>
#include <stdlib.h>

int main()
{
	int money;
	
	printf("請輸入金額:");
	scanf("%d", &money);
	if (money>2000){
		money = money * 0.7;
		printf("送你一張禮卷\n");
	} 
	printf("實需付: %d 元 \n", money);
	system("pause");
	return 0;
}
