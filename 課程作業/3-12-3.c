#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x[3] = {};
	printf("請輸入國文英文數學成績:");
	scanf("%d %d %d", &x[0], &x[1], &x[2]);
	
	printf("平均分數為:%f\n", (x[0]+x[1]+x[2])/3.0);

	system("pause");
	return 0;
}

