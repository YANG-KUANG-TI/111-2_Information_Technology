#include <stdio.h>
#include <stdlib.h>

#define s 85

int main()
{
	int x, y, z;
	printf("�п�J���{��:");
	scanf("%d", &x);
	
	if(x<=1500)
		y=s;
	else{
		z = x-1500;
		if(z%500==0)
			y = s+(z/500)*5;
		else
			y = s+((z/500)+1)*5;
	}
	
	printf("�ݥI����:%d��\n", y);

	system("pause");
	return 0;
}

