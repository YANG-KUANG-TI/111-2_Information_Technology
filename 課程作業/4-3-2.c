#include <stdio.h>
#include <stdlib.h>
int main()
{
	char rain;
	
	printf("���ѷ|���|�U�B(Y/N):");
	scanf("%c", &rain);
	
	if(rain == 'y' || rain == 'Y') printf("�|�U�B\n");
	else printf("���|�U�B\n");
	
	system("pause");
	return 0;
}
