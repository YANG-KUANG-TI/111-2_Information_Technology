#include <stdio.h>
#include <stdlib.h>
int main()
{
	int year;
	
	printf("請輸入西元年:"); 
	scanf("%d", &year);
	if(year%100==0){ 
		if(!(year%100)&&year%400) printf("不是潤年\n");
		else printf("是閏年\n");
	} 
	else printf("不是閏年\n");
	
	system("pause"); 
	return 0;
} 
