#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b;
	printf("�п�J��Ʀr:");
	scanf("%d %d", &a, &b);
	
	printf("a + b = %d \n", a+b);
	printf("a - b = %d \n", a-b);
	printf("a * b = %d \n", a*b);
	printf("a / b = %0.2f \n", (float)a/b);
	printf("a % b = %d \n", a%b);

	system("pause");
	return 0;
}

