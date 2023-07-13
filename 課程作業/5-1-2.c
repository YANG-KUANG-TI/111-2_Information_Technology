#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int x=0;
	for(i=1; i<11; i++){
		x = x + i;
	}

	printf("%d", x);

	system("pause");
	return 0;
}

