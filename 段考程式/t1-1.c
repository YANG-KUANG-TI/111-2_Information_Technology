#include <stdio.h>
#include <stdlib.h>

int main()
{
char n[20];
char y[50];
char r[10];
float k=20;
char j[20];
char a[20];

printf("�п�J�W�l:");
scanf("%s", &n);
printf("�п�J�Ǹ�:");
scanf("%s", &y);
printf("�п�J����:");
scanf("%s", &r);
printf("�п�J�魫:");
scanf("%f", &k);
printf("�п�J�~��:");
scanf("%s", &j);
printf("�п�J�嫬:");
scanf("%s", &a);

printf(" \n");
printf(" \n");

printf("�ڪ��W�l�O     : %s", n); 
printf("     �ڪ��Ǹ��O : %s\n", y);
printf("�ڪ������O     : %s ����", r);
printf("     �ڪ��魫�O : %f ����\n", k);
printf("�ڪ��~�֬O     : %s ��", j);
printf("     �ڪ��嫬�O : %s ��\n", a);


system("pause");
return 0;
}
