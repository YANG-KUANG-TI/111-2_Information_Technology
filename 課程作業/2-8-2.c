#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int y, m, d;
	char n[20];
	char r[50];
	char p[10];
	
	printf("�п�J�ͤ�(yyyy mm dd):");
	scanf("%d %d %d", &y, &m, &d);
	printf("�п�J�m�W:");
	scanf("%s", &n);
	printf("�п�J�a�}:");
	scanf("%s", &r);
	printf("�п�J�q��:");
	scanf("%s", &p);
	
	printf("===========================\n");
	
	printf("�X�ͩ�褸%d�~%d��%d��\n", y, m, d);
	printf("�ϥΪ̩m�W�O:%s\n", n); 
	printf("�ϥΪ̦a�}�O:%s\n", r); 
	printf("�ϥΪ̹q�ܬO:%s\n", p);
	
	system("pause");
	return 0;
}

