#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x[3] = {};
	printf("�п�J���^��ƾǦ��Z:");
	scanf("%d %d %d", &x[0], &x[1], &x[2]);
	
	printf("�������Ƭ�:%f\n", (x[0]+x[1]+x[2])/3.0);

	system("pause");
	return 0;
}

