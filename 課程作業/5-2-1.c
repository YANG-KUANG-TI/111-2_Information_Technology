#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i=1;
	int t=0;
	
	while(i<=99){
		t+=i;
		i+=2;
	}

	printf("1+3+5+7+...+99 = %d \n", t);

	system("pause");
	return 0;
}

