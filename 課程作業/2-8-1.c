#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int a;
	float b;
	char c;
	char name[6];
	
	printf("�п�J�U�ܼ�:");
	scanf("%d %f %c %s", &a, &b, &c, &name);
	
	printf("a = %d\n",a);
	printf("b = %.1f\n",b); 
	printf("c = %c\n",c); 
	printf("name = %s\n", name);
	
	system("pause");
	return 0;
}
