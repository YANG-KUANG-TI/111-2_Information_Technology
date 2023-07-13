#include <stdlib.h>
int main()
{
	float r=0;
	printf("請輸入半徑:");
	scanf("%f", &r);
	
	printf("圓面積為 %f\n", 3.14159*r*r);
	printf("圓面積為 %f\n", 3.14159*2.0*r);
	
	system("pause");
	return 0;
}

