#include <stdio.h>
#include <stdlib.h>
int main()
{
	int year;
	
	printf("�п�J�褸�~:"); 
	scanf("%d", &year);
	if(year%100==0){ 
		if(!(year%100)&&year%400) printf("���O��~\n");
		else printf("�O�|�~\n");
	} 
	else printf("���O�|�~\n");
	
	system("pause"); 
	return 0;
} 
