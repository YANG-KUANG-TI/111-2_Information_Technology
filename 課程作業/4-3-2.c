#include <stdio.h>
#include <stdlib.h>
int main()
{
	char rain;
	
	printf("今天會不會下雨(Y/N):");
	scanf("%c", &rain);
	
	if(rain == 'y' || rain == 'Y') printf("會下雨\n");
	else printf("不會下雨\n");
	
	system("pause");
	return 0;
}
