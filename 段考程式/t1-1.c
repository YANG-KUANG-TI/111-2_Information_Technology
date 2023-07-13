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

printf("請輸入名子:");
scanf("%s", &n);
printf("請輸入學號:");
scanf("%s", &y);
printf("請輸入身高:");
scanf("%s", &r);
printf("請輸入體重:");
scanf("%f", &k);
printf("請輸入年齡:");
scanf("%s", &j);
printf("請輸入血型:");
scanf("%s", &a);

printf(" \n");
printf(" \n");

printf("我的名子是     : %s", n); 
printf("     我的學號是 : %s\n", y);
printf("我的身高是     : %s 公分", r);
printf("     我的體重是 : %f 公斤\n", k);
printf("我的年齡是     : %s 歲", j);
printf("     我的血型是 : %s 型\n", a);


system("pause");
return 0;
}
