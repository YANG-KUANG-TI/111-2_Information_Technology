#include <stdio.h>
#include <stdlib.h>

int main()
{
	int money;
	
	printf("�п�J���B:");
	scanf("%d", &money);
	if (money>2000){
		money = money * 0.7;
		printf("�e�A�@�i§��\n");
	} 
	printf("��ݥI: %d �� \n", money);
	system("pause");
	return 0;
}
