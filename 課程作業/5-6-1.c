#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	for(i=1; i<=5; i++){
		int j;
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

