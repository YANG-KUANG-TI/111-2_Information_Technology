#include <stdio.h>
#include <stdlib.h>
int main()
{
    float r=0;
    float k=0;
    printf("�п�J����(cm):");
    scanf("%f",&r);
    printf("�п�J�魫(kg):");
    scanf("%f",&k);

    printf("BMI = %f \n",k/(r/100*r/100));
    printf("---------------------------\n" );

    system("pause");
    return 0;
}
