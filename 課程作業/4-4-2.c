#include <stdio.h>
#include <stdlib.h>

int main()
{
	int money;
	
	printf("�п�J���B:");
	scanf("%d", &money);
	
	if (money>20000) printf("��ݥI: %d �� \n", (money*8/10));
	else if (money>10000) printf("��ݥI: %d �� \n", money*85/100);
	else if (money>5000) printf("��ݥI: %d �� \n", money*9/10);
	else printf("��ݥI: %d �� \n", money*96/100);
	
	system("pause");
	return 0;
}

