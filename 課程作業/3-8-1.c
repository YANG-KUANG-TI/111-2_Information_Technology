#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x=0;
	printf("块计:");
	scanf("%d", &x);
	
	x%2==1 ? printf("计\n") : printf("案计\n");
	
	system("pause");
	return 0;
}

