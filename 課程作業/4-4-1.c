#include <stdio.h>
#include <stdlib.h>
int main()
{
	int score;
	
	printf("叫块Θ罿:");
	scanf("%d",&score);
	
	if(score > 100 || score <0) printf("岿┰QQ\n");
	else if(score >= 90) printf("纔单\n");
	else if(score >= 80) printf("ヒ单\n");
	else if(score >= 70) printf("单\n");
	else if(score >= 60) printf("单\n");
	else printf("单\n");
	
	system("pause");
	return 0;
}

