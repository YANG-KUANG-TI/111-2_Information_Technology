#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int y, m, d;
	char n[20];
	char r[50];
	char p[10];
	
	printf("請輸入生日(yyyy mm dd):");
	scanf("%d %d %d", &y, &m, &d);
	printf("請輸入姓名:");
	scanf("%s", &n);
	printf("請輸入地址:");
	scanf("%s", &r);
	printf("請輸入電話:");
	scanf("%s", &p);
	
	printf("===========================\n");
	
	printf("出生於西元%d年%d月%d日\n", y, m, d);
	printf("使用者姓名是:%s\n", n); 
	printf("使用者地址是:%s\n", r); 
	printf("使用者電話是:%s\n", p);
	
	system("pause");
	return 0;
}

