#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 0;
	int out = 0;
	
	printf("請輸入身高(cm):");
	scanf("%d", &x);
	printf("標準體重是%fkg\n", (float)(x-100)*0.9);
	
	system("pause");
	return 0;
}
