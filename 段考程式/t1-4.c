#include <stdio.h>
#include <stdlib.h>

int main()
{
int n=0;

printf("請輸入百元鈔票張數:");
scanf("%d",&n);

printf("可以換到50元: %d 個\n",n*2 ); 
printf("可以換到10元: %d 個\n",n*10 );

system("pause");
return 0;
}
