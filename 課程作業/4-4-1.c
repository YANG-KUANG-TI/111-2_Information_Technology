#include <stdio.h>
#include <stdlib.h>
int main()
{
	int score;
	
	printf("�п�J���Z:");
	scanf("%d",&score);
	
	if(score > 100 || score <0) printf("���F��QQ\n");
	else if(score >= 90) printf("�u��\n");
	else if(score >= 80) printf("�ҵ�\n");
	else if(score >= 70) printf("�A��\n");
	else if(score >= 60) printf("����\n");
	else printf("�B��\n");
	
	system("pause");
	return 0;
}

